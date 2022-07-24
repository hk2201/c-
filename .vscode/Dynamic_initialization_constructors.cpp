#include<iostream>
using namespace std;

class Bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        Bankdeposit(){} //imp to make blank because compiler can get confused

        Bankdeposit(int p, int y, float r);
        Bankdeposit(int p, int  y, int r);

        void show();
};

Bankdeposit::Bankdeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
    
}

Bankdeposit::Bankdeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void Bankdeposit::show(){
    cout<<endl<<"Principal amount was"<<principal<<endl<<"Reurn value after"<<years<<"is"<<returnValue<<endl;
}

int main(){
    Bankdeposit cd1, cd2, cd3;
    int p,y;
    float r;
    int R;

    cin>>p>>y>>r;
    cd1 = Bankdeposit(p,y,r);
    cd1.show();

    cin>>p>>y>>R;
    cd2 = Bankdeposit(p,y,R);
    cd2.show();


    return 0;
}


