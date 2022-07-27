#include<iostream>
using namespace std;

template <class T>
class Vector{
    public:
        T *arr;
        int size;

            Vector(int m){
                size = m;
                arr = new T[size];
            }

        T dotPro(Vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i]* v.arr[i];

            }
            return d;
            

        }
};

int main(){
    // Vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=1;
    // Vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a = v1.dotPro(v2);
    // cout<<a<<endl;

    Vector <float>v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=3.2;
    v1.arr[2]=1.3;
    Vector <float>v2(3);
    v2.arr[0]=1.1;
    v2.arr[1]=0;
    v2.arr[2]=1.2;
    float a = v1.dotPro(v2);
    cout<<a<<endl;

    //so we use template as we need to make many classes for different datatypes
    



    return 0;


}