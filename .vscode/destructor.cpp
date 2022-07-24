#include<iostream>
using namespace std;

int count = 0;

class num{
    public:
        num(){
            count++;
            cout<<"Constructor is called for obj number"<<count<<endl;
        }

        ~num(){
            cout<<"Destructor called for obj"<<count<<endl;
            count--;
        }

};

int main(){
    cout<<"Inside main function"<<endl;
    cout<<"Creating 1 objts"<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"More two objts"<<endl;
        num n2,n3;
        cout<<"Exiting block"<<endl;

    }
    cout<<"Back to main"<<endl;

    return 0;

}
