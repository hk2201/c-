#include<iostream>
#include<list>
using namespace std;
// Not exactly the same but yeah kinda works likes this can take reference and learn.
template <class T>
void display(list<T> &lst){
    for (int i = 0; i < lst.size(); i++)
    {
        cout<<i<<" ";
    }
    
}


int main(){
    // Ways to create vectors
    list<int> lst1; // zero lenght vector
    // list<char> lst2(4); // 4 element character vector
    // list<char> lst3(lst2); // 4 element character vector from vec2
    // list<int> lst4(4,3); // 4 threes.
    // display(lst4);
    int element;
    int size;
    cout<<"Enter Size: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        
       cout<<"Enter the element: "<<endl;
       cin>>element;
       lst1.push_back(element);
    };
    // lst1.pop_back();
    lst1.sort();
    display(lst1);
    // list<int>:: iterator iter = lst1.begin();
    // vec1.insert(iter, 500);
    // vec1.insert(iter+1, 500);
    // lst1.insert(iter+1,5, 500);
    // display(lst1);

    

    return 0;
}