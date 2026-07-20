//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//
//
//static int count
//count++;
//static Show()
//
//friend void B::fun();
//
//
//c1  'A'
//
//13A23B
//
//apple1, 2
//apple2, 2
//display apple1, 1
//display apple0, 0
//display apple0, -1
//
//x = 5, y = 1;
//x = 10, y = 2;
//x = 
//
//template<class T>
//void fun(T& a, T& b) {
//
//}
//
//const char*
//
//
//
//realPart(real), imagePart(image)
//realPart + a.realPart, imagePart + a.imagePart
//
//delete[] p
//
//return p[i]
//
//#include<iomanip>
//
//p = new int[n] or new float[n]
//
//return p[i]
//
//n
//
//a[i] = 2 * i
//
//v1 n = 0;
//v2 n = 5 0, 1, 4, 9, 16
//
//
//friend myComplex operator+(const myComplex & left, const myComplex & right)
//
//
//return *this
//else if (imag < 0)cout << "-" << imag << "i"
//
//0, 1
//1 
//
//
//
//3.1416,3.1400
//
//ifstream infile("data.dat")
//
//
//12345#1#2#3\n
//
//***45#*#*#*
//
//Water***melons*t*a*r\n
//
//WATER***MELONS*T*A*R
//
//12.3 45.62 1.456 321 1592
//
//12.3**
//45.6**
//1.5***
//321.0*
//1592.0
//
//void fun() { Base::fun(); }
//
//a = 50 b = 60 x = 70 y = 80
//a = 10 b = 20 x = 30 y = 40
//a = 30 b = 40 x = 50 y = 60
//u = 120 v = 70
//
//
//u = 70 + 50 = 120
//v = 80 - 70 + 60 = 70
//
//
//xaa10
//A : 10
//A : 10
//A : 5
//B : 5, 10
//~B : 5
//~A : 5
//~A : 10
//~A : 10
//
//30
//
//95
//
//abcdef 30
//caishaokun 95
//
//
//a(j), b(i)
//a.geta()
//
//b[i].show()
//
//A:10
//A : 5
//B : 5, 10
//
//a12
//1, 2
//3, 4
//5, 6
//
//XY
//
//
//ABC
//
//a - ¡· S2(1) S1(2)
//
//S1(2) S2(1)
//
//Construct Son : 2
//Construct Son : 1
//Construct Son : 2
//Construct Son : 1
//CopyConstruct Example
//Destruct Example
//Destruct Son : 1
//Destruct Son : 2
//Destruct Example
//Destruct Son : 1
//Destruct Son : 2
//
//1 1
//
//1 1 1 1
//
//
//son 2
//son 1
//cS
//cS
//cE
//De
//De 1
//Ds 2
//De
//Ds 1
//Ds 2
//
//
//S1  S2(7)
//
//s1 - 5 s2 6
//
//Son:15
//Son : 7
//Copy Son
//Son : 15
//7, 15
//Des Son : 6
//Des Son : 5
//Des Son : 7
//Des Son : 15
//
//this->weight = w
//...
//cars = new Car[MAX]
//delete[] cars
//numberOfCar >= MAX
//cars[numberOfCar].set(ID, w, c)
//numberOfCar++
//
//pk.view()
//
//
//2 4
//
// 
//z 10
//
//2 4 
//
//
//10 0
//
//i = 7
//n = 0
//
//
//virtual double payment()const=0
//
//double payment()const
//return hours*wage
//
//p[i]->payment()
//
//delete ep[i]
//
//
//

#include <iostream>

using namespace std;

class A {

public:

    A() { cout << "As cons." << endl; }

    virtual ~A() { cout << "As des." << endl; }

    virtual void f() { cout << "As f()." << endl; }

    void g() { f(); }

};

class B :public A {

public:

    B() { f(); cout << "Bs cons." << endl; }
    void f() { cout << "Bs f()." << endl; }
    ~B() { cout << "Bs des." << endl; }

};

class C :public B {

public:

    C() { cout << "Cs cons." << endl; }

    ~C() { cout << "Cs des." << endl; }

    void f() { cout << "Cs f()." << endl; }

    int cc;
};

int main() {

    A* a = new C;

    a->g();

    delete a;

    return 0;

}



virtual ~Base()

an cns
carnivore cons
meat
anials des

virtual double Marks() const=0

ptr[i]->Marks()


totalMarks(stu, 6)

l am grandpa
l am son
l am grandson
l am grandson
l an granson

a x = 5  8
ab x = 8 y = 6
abc x = 5 y = 6 z = 7
8
8,6
8,6,7
16 9
24 12 9
