#include<iostream>
using namespace std;
class Y;

class X{
    int data;
    public:
        void setVal(int val){
            data = val;
        } 
    friend void add(X, Y);
};

class Y{
    int num;
    public:
        void setVal(int val){
            num = val;
        }
    friend void add(X, Y);
};

void add(X q1, Y q2){
    cout<<"Adding"<<q1.data+q2.num<<endl;
};

int main(){
    X a;
    a.setVal(4);
    Y b;
    b.setVal(1);

    add(a,b);
    return 0;
}