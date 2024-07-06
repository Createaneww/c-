#include<bits/stdc++.h>
using namespace std;
void factor(int n){
    // int i = 1;
    // while(i<=n){
    //     if(n%i == 0){ 
    //         cout<<i<<endl;
    //     }
    //     i++;
    // }
    
    // for(int i = 1; i<=n/2; i++){
    //     if(n%i==0){
    //         cout<<i<<" "; 
    //     }
    // }
    vector<int> v;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            v.push_back(i);
        if(n/i != i){
            v.push_back(n/i);
        }
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v ) cout<<it<<" ";
}
int main(){
    int n;
    cin>>n;
    factor(n);
}