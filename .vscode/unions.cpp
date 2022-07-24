#include <iostream>
using namespace std;

union employee
{
    int eid;
    int salary;
};


int main(){
    union employee hk;
    hk.eid = 1;
    cout<<hk.eid;
    hk.salary = 1000;
    // cout<<hk.salary;


    return 0;

}