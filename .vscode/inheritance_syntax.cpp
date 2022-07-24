#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        float salary;
        Employee(int inp){
            id = inp;
            salary = 100;

        }
        Employee(){};

};

/*
Derived class syntax

class {{derived-class-name}} : {{visibilty-mode}} {{base-class-name}}
{
    class members/methods...
}

Note:
1. Default visibilty mode is private
2. Private Visi Mode: Pubic members of the base class becomes private members of the derived class
3. Public Visi Mode: Pubic members of the base class becomes public members of the derived class
4. Private members are never inherited

*/

class Programmer : public Employee{
    public:
        int languageCode;
        Programmer(int inp){
            id = inp;
            languageCode = 40;
            salary = 10;
        }


};


int main(){
    Employee hk(2);
    cout<<hk.id<<endl;
    cout<<hk.salary<<endl;

    Programmer skill(4);
    cout<<skill.languageCode<<endl;
    cout<<skill.id<<endl;
    cout<<skill.salary<<endl;

    return 0;
}