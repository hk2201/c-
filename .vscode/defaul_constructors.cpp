#include<iostream>
using namespace std;

class Simple{
    int data1,data2;

    public:
        Simple(int a, int b = 10){
            data1 = a;
            data2 = b;
        }

        void printN();
};

void Simple:: printN(){
    cout<<data1<<","<<data2<<endl;
}




int main(){

    Simple n(1);
    n.printN();



    return 0;
}