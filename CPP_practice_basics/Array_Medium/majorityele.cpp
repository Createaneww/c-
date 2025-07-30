#include<bits/stdc++.h>
using namespace std;

int majorityelement(vector<int>&arr , int n){
    unordered_map<int , int>mpp;
    for (int i = 0;  i < n;  i++)
    {
        mpp[arr[i]]++;
    }
    
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    
}

int mooreVotingalgo(vector<int>&arr , int n){
    int cnt = 0 ; 
    int ele;
    for(int i = 0 ; i<n ;i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele){
            cnt++;
        }else{
            cnt--;
        }
    }
//verify if the ele is more than n/2
int cnt1 = 0;
for(int i = 0; i < n; i++)
{
    if(arr[i] == ele){
        cnt1++;
    }
    if(cnt1>n/2) return ele;
    
}
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<majorityelement(arr , n);
}