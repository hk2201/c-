#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with the files in c++ ar:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

*/

//Two ways to open a file
//1. Using the Constructor
//2.Using the member function open() of the class

int main(){
    string st = "My Name is Khan";
    string st2;
    // //opening files using the constructor and writing it
    // ofstream out("sample1.txt");  // Write operation
    // out<<st;

    //opening the fils using the constructor and reading it
    ifstream in("sample1.txt");
    // in>>st2; // this will only print first word as it ignores spaces and lines
    getline(in, st2); // this will print the whole line.
    cout<<st2;
    return 0;

}