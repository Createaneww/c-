#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i;j++){   // space wala loop
            cout<<"  ";

        }
        for(int j = 1;j<=i;j++){  // column wala loop
        cout<<j<<" ";
        }
        cout<<endl;
    }
} 
// same is rhombus usme space wala + square wala 
// pyramid and diamond rehe gaya bas 
// PATTERN COMPLETE