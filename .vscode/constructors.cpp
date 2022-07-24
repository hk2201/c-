#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        void prinN(){
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;        
        }
    // Complex(void); //declaring constructor
        Complex(int,int);
};

// Complex::Complex(void){ // this is default constructor as it takes no args
//     a = 10;
//     b = 20;
// }

Complex::Complex(int x, int y){ // this is parametrized constructor as it takes no args
    a = x;
    b = y;
}

int main(){
    // Complex c1;
    // c1.prinN();

    //implicit call
    Complex a(4,5);
    a.prinN();
    

    //explicit call
    Complex b = Complex(1,2);
    b.prinN();
    


    return 0;
}

/* Characteristics of constructors
1.Should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot retrun values and do not have any retrun type
4.It can have default arguments
5.We cannot refer to their address



*/