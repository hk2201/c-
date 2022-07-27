#include<iostream>
using namespace std;

template<class T>
class hk{
    public:
    T data;
    hk(T a){
        data = a;
    }

    void display();
};

template<class T>
void hk<T>:: display(){
    cout<<"My age is: "<<data<<endl;;
}

void Func(int a){
    cout<<"Func"<<a<<endl;

}

template <class T>
void Func(T a){
    cout<<"TempFunc"<<a<<endl;
}

int main(){
    hk <float> h(2.4);
    h.display();

    Func(4);//Exact function values will only retrunr
    Func('C');
    return 0;
}