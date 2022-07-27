#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("sample1.txt");
    cout<<"Enter you name: ";
    string name;
    cin>>name;
    // getline(out, name);
    out<<name;
    out.close();

    ifstream in("sample2.txt");
    string s2;
    
    return 0;
}