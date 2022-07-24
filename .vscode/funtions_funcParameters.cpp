#include <iostream>
using namespace std;

// int sum(int a, int b); // acceptable

int sum(int , int); //acceptabel

void greet(){
    cout<<"\nmorning";
}


int main(){
    // num1 and num 2 actaul parameter
    int num1,num2;
    cout<<"num1"<<endl;
    cin>>num1;
    cout<<"num1"<<endl;
    cin>>num2;
    cout<<sum(num1,num2);
    greet();

    return 0;




}

int sum(int a, int b){
    // a and b formal parameter 
    int c = a+b;
    return c;
}