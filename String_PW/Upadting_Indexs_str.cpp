#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter what you want to say"<<endl;
    getline(cin,s);  
    for(int i = 0; i< s.length(); i++){
        if(i%2 == 0){
            s[i]='a';
        }          
          
    }
    cout<<s; 
}
