#include<iostream>
using namespace std;
//Forward Declaration
class Complex;

class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }

        int sumRC(Complex, Complex);
        int sumCC(Complex, Complex);
};

class Complex{
    int a;
    int b;
    public:
    // // Individually declaraing functions as friends
    //     friend int Calculator::sumRC(Complex,Complex);
    //     friend int Calculator::sumCC(Complex,Complex);

// Declaring class as friend
        friend class Calculator;
        void setNum(int a1, int a2){
            a = a1;
            b = a2;

        }

};

int Calculator::sumRC(Complex q1, Complex q2){
    return (q1.a + q2.a);
}


int Calculator::sumCC(Complex q1, Complex q2){
    return (q1.b + q2.b);
}

int main(){
    Complex z,x;
    z.setNum(1,2);
    x.setNum(2,3);

    Calculator cal;

    int res = cal.sumRC(z,x);
    cout<<"real"<<res<<endl;

    int rec = cal.sumCC(z,x);
    cout<<"Comp"<<rec<<endl;

    return 0;
}