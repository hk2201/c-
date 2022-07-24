#include <iostream>
using namespace std;

// struct employee
// {
//     int empId;
//     float salary;
//     char favchar;
// };

typedef struct employee
{
    int empId;
    float salary;
    char favchar;
} ep;


int main(){
    ep om;
    om.empId = 1;
    cout<<om.empId;


    // struct employee harshad;
    // harshad.empId = 20;
    // harshad.salary = 1000;
    // harshad.favchar = 'h';

    // cout<<harshad.empId<<endl;
    // cout<<harshad.salary<<endl;
    // cout<<harshad.favchar<<endl;

    return 0 ;

}