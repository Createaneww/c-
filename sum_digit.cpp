#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastdi = 0;
    int sum = 0;
    while(n!=0){
        lastdi = n%10;
        n = n/10;
        if(lastdi%2 != 0){
            continue;
        }
        sum = sum+lastdi;
    }    
    cout<<sum;
}