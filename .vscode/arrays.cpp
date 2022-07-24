#include <iostream>
using namespace std;

int main()
{
    int marks[] = {1, 2, 3, 4} ;
    
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;


    // for (int i = 0; i < 4; i++){
    //     cout<<marks[i]<<endl;
    // }

    // pointers and arrays
    int* p = marks;

    // cout<<"value is"<<*p<<endl;
    // cout<<"value is"<<*(p+1)<<endl;
    // cout<<"value is"<<*(p+2)<<endl;
    // cout<<"value is"<<*(p+3)<<endl;

    cout<<*(++p)<<endl;
    // cout<<*p<<endl;
    // cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;




    
    return 0;
}
