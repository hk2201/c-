#include<iostream>
using namespace std;

class baseClass{
    public:
    int varBase;
        void display(){
            cout<<"Base class display"<<varBase<<endl;
        }
};

class derivedClass:public baseClass{
    public:
    int varDerived;
        void display(){
            cout<<"Base class display"<<varBase<<endl;
            cout<<"Base class display"<<varDerived<<endl;

        }
};

int main(){
    baseClass * basePointer;
    baseClass obj1;
    derivedClass obj2;
    basePointer = &obj2;

    basePointer->varBase=10;
    // basePointer->varDerived = 20; // will throw error because it will call only that function for which pointer is.
    basePointer->display();

    derivedClass * derivedPointer;
    derivedPointer = &obj2;

    derivedPointer->varDerived=100;
    derivedPointer->display();

    return 0;
}