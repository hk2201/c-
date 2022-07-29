#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){

    //Function objects: Function wrapped in a class so that it is avaible as a object 
    int arr[] = {1,10,2,145,4,7};
    sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    



    return 0;
}