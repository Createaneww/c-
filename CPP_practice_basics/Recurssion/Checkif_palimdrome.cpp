#include<bits/stdc++.h>
using namespace std;

bool Reverse(int i , string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return Reverse(i+1 , s);

}

int main(){
string s;
getline(cin,s);
cout<<Reverse(0 , s);

}