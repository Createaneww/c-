#include<bits/stdc++.h>
using namespace std;

int majorityelement(vector<int>&arr , int n){
    int ele;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }else if(arr[i] == ele){
            cnt++;
        }else{
            cnt--;
        }
    }

    int cnt1= 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == ele){
            cnt1++;
        }
    }
    if(cnt1>n/2) return ele;
    
    
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