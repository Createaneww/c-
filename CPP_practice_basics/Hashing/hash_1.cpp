#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

//precompute
int hash[13] = {0};
for(int i = 0 ; i<n ; i++){
    hash[arr[i]]++;
}

    int q; //no.of queries
    cin>>q;
    while (q--) //entering queries
    {
        int numbers;
        cin>>numbers;
        //fetch
        cout<<hash[numbers]<<" ";
    }
    
}