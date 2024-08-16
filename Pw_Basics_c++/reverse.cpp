#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int z = n;
    int r = 0;
    int lastdi;
    while(n!=0){
        lastdi = n%10;
        n = n/10;
        r = r*10+lastdi;
    }
    cout<<r+z;
}   