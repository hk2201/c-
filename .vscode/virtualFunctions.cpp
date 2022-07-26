#include<iostream>
using namespace std;

class baseClass{
    public:
    int varBase=1;
        virtual void display(){
            cout<<"Base class display"<<varBase<<endl;
        }
};

class derivedClass:public baseClass{
    public:
    int varDerived=2;
        void display(){
            cout<<"Base class display"<<varBase<<endl;
            cout<<"Base class display"<<varDerived<<endl;

        }
};

int main(){
    baseClass *bptr;
    baseClass obj1;
    derivedClass obj2;

    bptr = &obj2; 
    /*we if run without virtual thn only base class function will run...but adding virtual what it will say is pointer pointing to me thn run function similar to me but not me*/

    bptr->display();
    return 0;
}