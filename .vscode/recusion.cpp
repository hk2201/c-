#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fab(int n){
    if(n<2){
        return 1;
    }
    return fab(n-2) + fab(n-1);
}

int main() {
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    // cout<<"Fact"<<factorial(num);
    cout<<"FiB"<<fab(num);
}