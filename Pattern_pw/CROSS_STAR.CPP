#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j = 1; j<=n;j++){
            if(i==j || (j==n-i+1)){
                cout<<"* ";
            }else if(i == 1 || j == 1 || i== n || j == n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}