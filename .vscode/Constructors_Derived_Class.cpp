#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
    // Order of execution of constructor -> first A() then B()
}

Case2:
class B: public A,public C{
    // Order of execution of constructor -> first A() then C() then B()
}

Case3:
class B: public A, virtual public C{
    // Order of execution of constructor -> first C() then A() then B()
}

*/

class Base1{
    int a1;
    public:
         Base1(int i){
            a1 = i;
            cout<<"Constructor of Base1 called"<<endl;
         };

         void printB1(){
            cout<<"Value of Base 1 is "<<a1<<endl;
         }

};

class Base2{
    int a2;
    public:
        Base2(int i){
            a2 = i;
            cout<<"Constructor of Base 2 is called"<<endl;
        };

        void printB2(){
            cout<<"The value of Base 2 "<<a2<<endl;
        }
};

class Derived:public Base1, public Base2{
    int derived1,derived2;
    public:
        Derived(int a, int b, int c, int d):Base1( a),Base2( b){
            derived1 = c;
            derived2 = d;
            cout<<"Constructor of Derived Class is called"<<endl;
        };

        void printD(){
            cout<<"The vlaue of Derived 1 and Derived 2 is "<<derived1<<endl<<derived2<<endl;
        }
};

int main(){
    Derived p(1,2,3,4);
    p.printB1();
    p.printB2();
    p.printD();
    return 0;
}