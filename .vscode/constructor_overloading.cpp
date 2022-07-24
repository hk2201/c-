#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(){
            a = 0;
            b = 0;
        }

        Complex (int x, int y){
            a = x;
            b = y;
        }

        Complex(int x){
            a = x;
            b = 0;
        }

        void printN(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    Complex c1(1,2);
    c1.printN();

    Complex c2(1);
    c2.printN();

    Complex c3;
    c3.printN();
    return 0;
}