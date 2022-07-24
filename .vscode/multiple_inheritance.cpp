#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1;
    public:
        void setBase1(int b1){
            base1 = b1;
        }
};

class Base2{
    protected:
        int base2;
    public:
        void setBase2(int b2){
            base2 = b2;
        }
};

class Base3{
    protected:
        int base3;
    public:
        void setBase3(int b3){
            base3 = b3;
        }
};

// Note that we can make n number of base classes its not like only two shoul be madhe from that only 1 derived class


//below is the syntax for the multiple inheritance --->
class derived:public Base1, public Base2, public Base3{
    public:
        void show(){
            cout<<"Base1 is "<<base1<<endl;
            cout<<"Base2 is "<<base2<<endl;
            cout<<"Base3 is "<<base3<<endl;
            cout<<"The sum of all is "<<base1+base2+base3<<endl;
        }
};

int main(){
    derived der;
    der.setBase1(10);
    der.setBase2(20);
    der.setBase3(30);
    der.show();
    return 0;
}