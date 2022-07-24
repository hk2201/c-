#include<iostream>
using namespace std;

class Complex{
    int image;
    int real;
    public:
        void getData(){
            cout<<"Image part is"<<image<<endl;
            cout<<"Real part is"<<real<<endl;
        }

        void setData(int i, int j ){
            image = i;
            real = j;
        }
};

int main(){
    // // Complex c1;
    // // Complex *ptr = &c1;

    // Complex *ptr = new Complex; // dynamically allocates  new

    // // (*ptr).setData(1,10); // Can also write this as:
    // ptr->setData(1,10);
    // // (*ptr).getData();// can also write this as:
    // ptr->getData();


    //Array of objects
    Complex *ptr = new Complex[4];
    ptr->setData(1,4);
    ptr->getData();
    return 0;



}