#include<iostream>
using namespace std;

int fact(int x){
    int product = 1;
    for(int i = 1; i<=x; i++){
        product *=i;
    }
    return product;
}

int main(){
    int n,r;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int a = fact(n);
    int b = fact(n-r);
    cout<<a/b;

return 0;
}