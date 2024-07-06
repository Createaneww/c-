#include<iostream>
using namespace std;
void PalindromeOrNot(int n){
    int temp = n , reverse = 0;
    while(n != 0){
        int lastdigi = n%10;
        
        reverse= (reverse*10) + lastdigi;
        n = n/10;
        
    }
    if(reverse == temp){
        cout<<"Yes palindrome";
    }else{
        cout<<"NOT a plaindrome";
    }
}
int main(){
    int n;
    cin>>n;
    PalindromeOrNot(n);
}