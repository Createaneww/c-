#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i = 1; i<=n; i++){       
        int a = 1;
        for(int j = 1; j<=i; j++){
            cout<<a<<" ";
            a+=1;
        }
        cout<<endl;
    }
}