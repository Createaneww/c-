#include<iostream>
using namespace std;
int fact(int x){
    int pro = 1;
    for(int i = 1; i<=x; i++){
        pro *= i;
    }
    return pro;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n ;
    cout<<"Enter value of n";
    cin>>n;
    for(int i = 0; i<=n;i++){
        for(int j = 0; j<=n-i -1; j++){
            cout<<" "; // space triangle

        }
        for(int j = 0; j<=i; j++){
            cout<<ncr(i,j)<<" ";

        }
        cout<<endl;
    }

}