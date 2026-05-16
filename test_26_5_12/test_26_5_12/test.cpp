#define _CRT_SECURE_NO_WARNINGS
//
#include<iostream>
using namespace std;

class A {
public:
	A() {
		cout << "constructa 0" << endl;
		a = 0;
		b = 0;
	}
	A(int i)
	{
		cout << "constructa 1" << endl;
		a = i;
		b = 0;
	}
	A(int i, int j) {
		cout << "constructa 2" << endl;
		a = i;
		b = j;
	}
	void display()
	{
		cout << "a=" << a << " b=" << b;
	}
private:
	int a;
	int b;
};

class B : public A
{
public:
	B() {
		cout << "constructb 0" << endl;
		c = 0;
	}
	B(int i):A(i) {
		cout << "constructb 1" << endl;
		c = 0;
	}
	B(int i,int j) :A(i, j){
		cout << "constructb 2" << endl;
		c = 0;
	}
	B(int i, int j, int k) :A(i, j) {
		cout << "constructb 3" << endl;
		c = k;
	}
	void display1()
	{
		display();
		cout << " c=" << c << endl;
	}
private:
	int c;
};

int main()
{
	B b1;
	B b2(1);
	B b3(1, 3);
	B b4(1, 3, 5);
	b1.display1();
	b2.display1();
	b3.display1();
	b4.display1();
	return 0;
}


#include <string>
#include<iostream>
using namespace std;

class Employee {
public:
	Employee(string id,string name);
	void pay();
	void display();


protected:
	string id_m;
	string name_m;
	double salary_m;
};

class Manager:public Employee {
public:
	Manager(string id, string name);

	void pay();

	void display();

private:
	string kind_m;
};


class Technician :public Employee {
public:
	Technician(string id, string name, int working_hours);
	void pay();
	void display();

private:
	int working_hours_m;
	string kind_m;
};


class Salesman:public Employee {
public:
	Salesman(string id, string name, int s);
	void pay();
	void display();

private:
	int sales_m;
	string kind_m;
};


class SalesManager:public Employee {
public:
	SalesManager(string id, string name, int s, int s2);
	void pay();
	void display();

private:
	int sales_m;
	int sales_all;
	string kind_m;
};


int main()
{
	string id, name;
	int hours;
	int sales;
	int sales_all;

	cout << "请输入行政管理人员的工号和姓名：";
	cin >> id >> name;
	Manager m1(id, name);

	cout << "请输入外聘技术人员的工号、姓名和工作时长：";
	cin >> id >> name >> hours;
	Technician t1(id, name, hours);

	cout << "请输入销售人员的工号、姓名和销售额：";
	cin >> id >> name >> sales;
	Salesman s1(id, name, sales);

	cout << "请输入销售经理的工号、姓名、本人销售额和部门总销售额：";
	cin >> id >> name >> sales >> sales_all;
	SalesManager sm1(id, name, sales, sales_all);

	cout << endl << "员工工资信息如下：" << endl;

	m1.display();
	m1.pay();

	t1.display();
	t1.pay();

	s1.display();
	s1.pay();

	sm1.display();
	sm1.pay();

	return 0;
}

Employee::Employee(string id, string name) :id_m(id), name_m(name), salary_m(0)
{
}

void Employee::pay() {
	cout << "该员工每月的工资是：" << salary_m << "元" << endl;
}

void Employee::display() {
	cout << "员工姓名：" << name_m << " 工号：" << id_m;
}


Manager::Manager(string id, string name) :Employee(id, name), kind_m("manager") {
	
}

void Manager::pay() {
	salary_m = 5000;
	Employee::pay();
}



void Manager::display() {
	Employee::display();
	cout << " 工种：" << kind_m << endl;
}

void Technician::display() {
	Employee::display();
	cout << " 工种：" << kind_m << " 工作时长：" << working_hours_m << "小时" << endl;
}

Technician::Technician(string id, string name, int working_hours) :Employee(id, name), working_hours_m(working_hours), kind_m("technician") {
}

void Technician::pay() {
	salary_m = working_hours_m * 100;
	Employee::pay();
}


Salesman::Salesman(string id, string name, int s) :Employee(id, name), sales_m(s), kind_m("salesman") {
	
}

void Salesman::display() {
	Employee::display();
	cout << " 工种：" << kind_m << " 销售额：" << sales_m << "元" << endl;
}

void Salesman::pay() {
	salary_m = sales_m * 0.07;
	Employee::pay();
}

SalesManager::SalesManager(string id, string name, int s, int s2) :Employee(id, name), sales_m(s), kind_m("SalesManager"), sales_all(s2) {
	
}

void SalesManager::display() {
	Employee::display();
	cout << " 工种：" << kind_m << " 销售额：" << sales_m << "元" << " 主管部门总销售额：" << sales_all << "元" << endl;
}

void SalesManager::pay() {
	salary_m = 8000 + sales_m * 0.07 + sales_all * 0.002;
	Employee::pay();
}


//4. 建立两个磁盘文件 f1.dat 和 f2.dat，编写程序实现以下工作：
//
//（1）从键盘输入 20 个整数，分别存放在两个磁盘文件中（每个文件中放 10 个数据）；
//
//（2）从 f1.dat 读入 10 个数，然后存放到 f2.dat 文件原有数据的后面；
//
//（3）从 f2.dat 中读入 20 个整数，将它们按从小到大的顺序存放到 f2.dat（不保留原来数据）。
//
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ofstream fout("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f1.dat");
	cout << "请输入磁盘文件一中的十个数字：";

	for (int i = 0; i < 10; i++) {
		int t;
		cin >> t;
		fout << t << " ";
	}
	fout.close();

	fout.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f2.dat");
	cout << "请输入磁盘文件二中的十个数字：";

	for (int i = 0; i < 10; i++) {
		int t;
		cin >> t;
		fout << t <<" ";
	}

	fout.close();

	ifstream fin("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f1.dat");
	fout.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f2.dat", ios::app);
	for (int i = 0; i < 10; i++) {
		int t;
		fin >> t;
		fout << t << " ";
	}

	fin.close();
	fout.close();

	fin.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f2.dat");
	
	vector<int> a;
	for (int i = 0; i < 20; i++) {
		int t;
		fin >> t;
		a.push_back(t);
	}

	fin.close();
	

	sort(a.begin(), a.end());
	fout.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\f2.dat");
	for (int i = 0; i < a.size(); i++) {
		fout << a[i] << " ";
	}

	fout.close();
	
	return 0;
}

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

class Worker {
public:
	int id;
	int age;
	int sal;
	string name;
	Worker(int i, int a, int s, string n) :id(i), age(a), sal(s), name(n) {};
};


int main()
{
	Worker a[5] = {
	{1001, 25, 5200, "张三"},
	{1002, 28, 6100, "李四"},
	{1003, 31, 6800, "王五"},
	{1004, 35, 7500, "赵六"},
	{1005, 40, 8200, "孙七"}
	};



	ofstream fout("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\worker.dat");

	for (int i = 0; i < 5; i++) {
		fout << a[i].id << " " << a[i].age << " " << a[i].sal << " " << a[i].name << endl;
	}
	fout.close();
	fout.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\worker.dat", ios::app);

	cout << "请输入两个新员工的数据：" << endl;
	cout << "输入格式：职工号 姓名 年龄 工资" << endl;

	for (int i = 0; i < 2; i++) {
		int id;
		string name;
		int age;
		int sal;

		cout << "请输入第" << i + 1 << "个新员工的职工号：";
		cin >> id;

		cout << "请输入第" << i + 1 << "个新员工的姓名：";
		cin >> name;

		cout << "请输入第" << i + 1 << "个新员工的年龄：";
		cin >> age;

		cout << "请输入第" << i + 1 << "个新员工的工资：";
		cin >> sal;

		fout << id << " " << age << " " << sal << " " << name << endl;
	}

	fout.close();

	ifstream fin("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\worker.dat");
	int id;
	string name;
	int age;
	int sal;

	cout << "文件中全部职工的数据如下：\n";
	while (fin >> id >> age >> sal >> name) {
		cout << "职工号：" << id << " 姓名：" << name << " 年龄：" << age << " 工资：" << sal << endl;
	}
	fin.close();
	while (1) {
		
		cout << "\n请输入要查询的职工号：(输入0结束)";
		int id_c;
		int cnt = 0;
		int flag = 1;
		cin >> id_c;
		if (id_c == 0) {
			break;
		}
		fin.open("C:\\Users\\LAOBIEXL\\Desktop\\246_马英杰_实验4\\worker.dat");
		while (fin >> id >> age >> sal >> name) {
			cnt++;
			if (id == id_c) {
				cout << "查寻成功，这是第" << cnt << "位员工" << endl;
				flag = 0;
				cout << "职工号：" << id << " 姓名：" << name << " 年龄：" << age << " 工资：" << sal << endl;
			}
		}
		if (flag) {
			cout << "无此人" << endl;
		}
		fin.close();
	}
	


	return 0;
}


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
    cout << "编号：" << num<< " 姓名：" << name<< " 性别：" << sex;
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
    cout << " 出生日期：" << year << "年" << month << "月"<< day << "日";
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