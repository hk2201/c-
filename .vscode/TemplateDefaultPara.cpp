#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>
class harshad{
    public:
    T1 d1;
    T2 d2;
    T3 d3;

    harshad(T1 a, T2 b, T3 c){
        d1 = a;
        d2 = b;
        d3 = c;
    }

    void display(){
        cout<<d1<<endl;
        cout<<d2<<endl;
        cout<<d3<<endl;
    }
};

int main(){
    harshad<>hk(1,1.2,'A');
    hk.display();
    return 0;
}