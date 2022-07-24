#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you boy??"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Hi bhaiyaahasdasa"<<endl;

        }
};

//Ambiguity resoltuion
class Derived:public Base1, public Base2{
    // int a;
    public:
        void greet(){
            Base1::greet();
        }
};

int main(){
    Base1 b1;
    b1.greet();

    Derived d1;
    d1.greet();

    return 0;
}