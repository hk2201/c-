#include<iostream>
using namespace std;

// float Avg(float a, float b){
//    float avrage = (a+b)/2;
//     return avrage;
// }

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T1,class T2>
float Avg(T1 a, T2 b){
   float avrage = (a+b)/2;
    return avrage;
}

int main(){
    // double a;
    // a = Avg(2.1,3.2);

    // cout<<a;

    int x = 2;
    int y = 3;
    swapp(x,y);

    cout<<x<<y;

    return 0;
}