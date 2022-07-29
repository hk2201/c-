#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}


int main(){
    // Ways to create vectors
    vector<int> vec1; // zero lenght vector
    vector<char> vec2(4); // 4 element character vector
    vector<char> vec3(vec2); // 4 element character vector from vec2
    vector<int> vec4(4,3); // 4 threes.
    display(vec4);
    // int element;
    // int size;
    // cout<<"Enter Size: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
        
    //    cout<<"Enter the element: "<<endl;
    //    cin>>element;
    //    vec1.push_back(element);
    // };
    // // vec1.pop_back();
    // // display(vec1);
    // vector<int>:: iterator iter = vec1.begin();
    // // vec1.insert(iter, 500);
    // // vec1.insert(iter+1, 500);
    // vec1.insert(iter+1,5, 500);
    // display(vec1);

    

    return 0;
}