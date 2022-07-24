#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;

    }

    void setSum(Complex o1, Complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print(){
        cout<<"Complex no is "<<a<<"+"<<b<<"i"<<endl;
    }
};  

int main(){
    Complex c1,c2,c3;
    c1.setData(1,2);
    c1.print();
    c2.setData(2,3);
    c2.print();
   
    c3.setSum(c1,c2);
    c3.print();

    return 0;
}