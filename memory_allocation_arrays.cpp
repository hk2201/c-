#include<iostream>
using namespace std;

class shop{
    int itemid[100]; //arrays that store 100
    int itemprize[100];
    int counter;
    public:
        void initcounter(){ counter = 0; }
        void setpize();
        void displayprize();
};

void shop :: setpize(){
    cout<<"Enter the id :"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter prize"<<endl;
    cin>>itemprize[counter];
    counter++;
}

void shop :: displayprize(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"ID"<<itemid[i]<<"prize"<<itemprize[i]<<endl;
    }
    
}



int main(){
    shop dukan;
    dukan.initcounter();
    dukan.setpize();
    dukan.setpize();
    dukan.setpize();
    dukan.displayprize();
    return 0;
}