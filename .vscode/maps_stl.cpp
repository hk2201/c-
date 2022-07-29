#include<iostream>
#include<string>
#include<map>
using namespace std;

// Maps are associtative arrays

int main(){
    map<string, int> marksMap;
    marksMap["harshad"] = 100;
    marksMap["Omakr"] = 101;
    marksMap["Sh"] = 102;

    marksMap.insert({{"avn",90},{"OVn",99}});
    map<string, int> :: iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
        // cout<<(*iter).second<<endl;

    }
    cout<<marksMap.size();
    

    return 0;
}