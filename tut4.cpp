#include<iostream>
using namespace std;

int c = 45;
// global variable

int main(){
    // int a, b, c;
    // cout<<"A: "<<endl;
    // cin>>a;
    // cout<<"B: "<<endl;
    // cin>>b;
    // cout<<"C: "<<endl;
    // cin>>c;
    // c = a + b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The Global is: "<<::c;

    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The size is: "<<sizeof(34.4)<<endl;
    // cout<<"The size is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size is: "<<sizeof(34.4L)<<endl;
    // cout<<"The size is: "<<sizeof(34.4l)<<endl;


   float x = 400;
   float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;


    return 0;
}