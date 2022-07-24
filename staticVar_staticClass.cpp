#include<iostream>
using namespace std;

class Employee{
    int id;
   static int count; // we cant initialize here count = 0 error occurs
public:
    void setData(){
        cout<<"Enter ID"<<endl;
        cin>>id;  
        count++;    
    }
    void getData(){
        cout<<"your id is "<<id<<"Employee No. "<<count<<endl;
    }
    static void getCount(){
        cout<<"Count is"<<count<<endl;
    }
};

// int Employee:: count; //deafult value 0....here we can initialize count to anything no error occus
int Employee:: count=100;
int main(){

    Employee hk,pk,ok;
    hk.setData();
    hk.getData();
    Employee::getCount();

    pk.setData();
    pk.getData();
    Employee::getCount();

    ok.setData();
    ok.getData();
    Employee::getCount();
    return 0;

}