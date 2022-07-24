#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin();
public:
    void read();
    // void chk_bin();
    void ones_comp();
    void display();
};

void binary ::read()
{
    cout << "Enter BIN" << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Bin" << endl;
            exit(0);
        }
    }
}

void binary ::ones_comp()
{   
    // chk_bin(); nested member
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(){
    cout<<"display"<<s<<endl;
    
}


int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_comp();
    // b.display();
    return 0;
}