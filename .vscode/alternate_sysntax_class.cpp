#include<iostream>
using namespace std;

/*
Synatx for initialization list in constructors:
constructor (argument list):initialization Sector
{
    assignment + other code;
}

*/

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j):a(i), b(j)
        // Test(int i, int j):a(i), b(i+j)
        // Test(int i, int j):a(i), b(2*j)
        // Test(int i, int j):a(i), b(a+j)
        // Test(int i, int j):b(j), a(i+b) // well get garbage value beacuse we have declared a first in private members.
        Test(int i, int j):a(i){
             b=a+j;
            cout<<"Constructor Executed"<<endl;
            cout<<"Value of and b are"<<a<<endl<<b<<endl;
        }
};

int main(){
    Test hk(1,2);
    return 0;
}