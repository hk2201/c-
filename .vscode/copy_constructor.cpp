#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
            a = 0;
        } // necessary to make
        number(int num){
            a = num;
        }

        number(number &obj){  // copy constructor
            a = obj.a;
        }

        void display(){
            cout<<"The number is "<<a<<endl;
        }
};

int main(){
    number x(5),y,z;
    x.display();
    y.display();
    z.display();


    number z1(x);
    z1.display();
    
    return 0;
}

// Compiler first checks if there is any copy const present if no thn it provides its own copy const.