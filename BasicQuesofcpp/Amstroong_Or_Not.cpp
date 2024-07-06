#include<bits/stdc++.h>
using namespace std;
void AmstrongOrNot(int n){
    int temp = n , sum = 0;
    int numDigits = log10(n) + 1; // Calculate the number of digits
    while(n != 0){
        int lastdigi = n%10;
        sum = sum + pow(lastdigi,numDigits);
        n = n/10;
        
    }
    
    if(sum == temp){
        cout<<"Yes Amstrong";
    }else{
        cout<<"NOT a AMstrong";
    }
}
int main(){
    int n;
    cin>>n;
    AmstrongOrNot(n);
}