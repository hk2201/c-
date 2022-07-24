#include <iostream>
using namespace std;

// void swap(int a, int b){ // will not work
//     int temp = a;
//     a = b;
//     b = temp;
// }


// call by reference
void swapPoint(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void swapPointVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int x=4 ,y=5;
    cout<<x<<y<<endl;
    // swap(x,y)   //will not work
    // swapPoint(&x,&y); 
    swapPointVar(x,y);
    cout<<x<<y<<endl;

    return 0;

     

}