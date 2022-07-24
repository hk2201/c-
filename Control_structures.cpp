#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Age? "<<endl;
    cin>>age;
    // if (age<20){
    //     cout<<"you are godd"<<endl;
    // }
    // else if (age == 20)
    // {
    //     cout<<"very godd"<<endl;
    // }
    // else{
    //     cout<<"Nice"<<endl;
    // }

    switch (age)
    {
    case 18:
        cout<<"you are godd"<<endl;
        break;

    case 20:
        cout<<"wow"<<endl;
        break;

    case 30:
        cout<<"Nice"<<endl;
        break;        
    
    default:
        cout<<"No cases"<<endl;

        break;
    }
    cout<<"Hogaya"<<endl;

    
    return 0;
}