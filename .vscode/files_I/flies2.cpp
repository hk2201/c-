#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //this is second method to usage of files.
    // ofstream out;
    // out.open("sample2.txt");
    // out<<"My name is khan";
    // out.close();

    ifstream in;
    in.open("sample2.txt");
    string st;

    while (in.eof()==0) //end of file
    {
        getline(in, st);
        cout<<st<<endl;
    };
    in.close();
    
    return 0;
}