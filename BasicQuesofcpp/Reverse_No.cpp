#include<iostream>
using namespace std;
int ReverseOfNum(int n){
    int r = 0;
    while(n != 0){
        int lastdigi = n%10;
        
        r = (r*10) + lastdigi;
        n = n/10;
        
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    cout<<ReverseOfNum(n);
}