#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    bool a = true;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
}