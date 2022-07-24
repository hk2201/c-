#include<iostream>
using namespace std;

class shopItems{
    int id;
    float prize;
    public:
        void setData(int a, float b){
            id = a;
            prize = b;
        }

        void getData(){
            cout<<"The id is"<<id<<endl;
            cout<<"The prize is"<<prize<<endl;
        }
};

int main(){
    shopItems *ptr = new shopItems[3];
    shopItems *ptrTemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < 3; i++)
    {
        cout<<"Enter id for item"<<i+1<<endl;
        cin>>p;
        cout<<"Enter Prize fot item"<<i+1<<endl;
        cin>>q;
        ptr->setData(p,q);
        ptr++;

    }
    
    for ( i = 0; i < 3; i++)
    {
        cout<<"Item Number"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
    
}