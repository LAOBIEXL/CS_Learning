#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(int n, string na, char s) :num(n), name(na), sex(s) {};
    void display();

private:
    int num;
    string name;
    char sex;
};

void Teacher::display() {
    cout << "编号：" << num << " 姓名：" << name << " 性别：" << sex;
}


class BirthDate
{
public:

    BirthDate(int y, int m, int d) :year(y), month(m), day(d) {
    };

    void display();

    void setDate(int y, int m, int d);
private:
    int year;
    int month;
    int day;
};

void BirthDate::display()
{
    cout << " 出生日期：" << year << "年" << month << "月" << day << "日";
}

void BirthDate::setDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}


class Professor : public Teacher
{
public:

    Professor(int n, string na, char s, int y, int m, int d) :Teacher(n, na, s), birthday(y, m, d) {};

    void display();

    void changeBirthday(int y, int m, int d);
private:
    BirthDate birthday;
};

void Professor::changeBirthday(int y, int m, int d) {
    birthday.setDate(y, m, d);
}

void Professor::display() {
    Teacher::display();
    birthday.display();
}

int main()
{
    Professor prof(1001, "张三", 'M', 2000, 5, 12);

    cout << "修改前信息：" << endl;
    prof.display();

    prof.changeBirthday(2001, 6, 18);

    cout << "修改后信息：" << endl;
    prof.display();
    return 0;
}