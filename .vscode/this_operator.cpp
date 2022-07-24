#include<iostream>
using namespace std;

class base{
    int a;
    public:
        // base & setData(int a)
        void setData(int a) {
            this->a = a;
            // return *this;
        }

        void getData(){
            cout<<a;
        }
};
//this is keyword which is pointer which points to the object which invokes the member functions.
int main(){
    base pk;
    pk.setData(4);
    pk.getData();
    // pk.setData(4).getData();
    return 0;
}