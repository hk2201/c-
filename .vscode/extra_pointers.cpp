#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int* ptr = &a;
    // *ptr = 100;
    // cout<<*ptr<<endl;




    //New operator
    // int *p = new int(40);
    // cout<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 1;
    *(arr+1) = 2;
    arr[2] = 3;
    delete[] arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}