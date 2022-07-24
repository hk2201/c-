#include<iostream>
using namespace std;

class Point{
    int a,b;
    public:
        Point(int x, int y){
            a = x;
            b = y;
        }

        void printN(){
            cout<<"The point is ("<<a<<", "<<b<<")"<<endl;
        }
};

int main(){
    Point a(1,2);
    a.printN();

    return 0;
}