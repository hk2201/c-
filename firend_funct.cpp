#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
    friend Complex cSum(Complex q1, Complex q2);    
        void setNum(int a1, int a2){
            a = a1;
            b = a2;

        }

        void printNum(){
            cout<<"Complex number is"<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex cSum(Complex q1, Complex q2){
    Complex q3;
    q3.setNum((q1.a+q2.a),(q1.b+q2.b));
    return q3;
}

int main(){
    Complex z,x,sum;
    z.setNum(2 ,2);
    z.printNum();
    x.setNum(3,4);
    x.printNum();

    sum = cSum(z,x);
    sum.printNum();

    return 0;
}