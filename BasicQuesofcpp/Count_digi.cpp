#include<iostream>
using namespace std;
int countDigi(int n){
    int i = 0;
    while(n>0){
        i++;
        n = n/10;
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigi(n);
}