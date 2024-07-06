#include<iostream>
using namespace std;
void prime(int n){
    int counter = 0;
    for(int i = 1; i*i<=n ; i++ ){
        if(n%i == 0){
            counter++;
            if(n/i != i){
                counter++;
            }
        }     
    }
    if(counter == 2) cout<<"Prime";
    else cout<<"Not Prime";
}
int main(){
    int n;
    cin>>n;
    prime(n);
}
