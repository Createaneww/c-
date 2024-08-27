#include<iostream>
#include<string>
using namespace std;

int main(){
    // string s = "parth";
    // cout<<s<<endl;     // push_back() = piche ek char jodta hai!!
    // s.push_back('y');
    // cout<<s;


// pop_back ********************
//     string s = "parth";
//     cout<<s<<endl;     
//     s.pop_back(); // pop_back = piche se ek char hatata hai!!
//     cout<<s;


// append *************************
    // string s = "parth";
    // cout<<s<<endl;     
    // s.append("Patel");  // append() = Puri ek string jodta hai!!
    // cout<<s;

// clear*****************************
    string s = "parth";
    cout<<s<<" "<<s.length()<<endl;
    s.clear();           // clear() = puri string khali ho jati hai!!
    cout<<s<<" "<<s.length()<<endl; 
return 0;
}