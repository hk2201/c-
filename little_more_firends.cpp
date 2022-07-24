#include<iostream>
using namespace std;

class c2;
class c1{
    int val;
    public:
        void idata(int a){
            val = a;
        }
        void display(){
            cout<<val<<endl;
        }
    friend void exchange(c1 & , c2 & );
};

class c2{
    int val2;
    public:
        void idata(int a){
            val2 = a;
        }
        void display(){
            cout<<val2<<endl;
        }
    friend void exchange(c1 & , c2 & );
};

void exchange(c1 & x, c2 & y){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}





int main(){
    c1 oc1;
    c2 oc2;

    oc1.idata(24);
    oc2.idata(30);

    exchange(oc1, oc2);
    oc1.display();

    oc2.display();
    return 0;
}