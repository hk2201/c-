#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(){
            salary = 122;
            cout<<"Enter Id"<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"Your id"<<id<<endl;
        }
};

int main(){
    // Employee hk,ok,pk,ik;
    // hk.setId();
    // hk.getId();

    // ok.setId();
    // ok.getId();

    // pk.setId();
    // pk.getId();

    Employee fb[4];

    for ( int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    

    return 0;
}