#include<bits/stdc++.h>
using namespace std;

int maxPRofitt(vector<int>&arr , int n){
    int mini = arr[0];
    int maxprofit = 0;
    for (int i = 1; i < n; i++)
    {
        int profit = arr[i] - mini;
        maxprofit = max(maxprofit , profit);
        mini = min(mini , arr[i]);
    }
    return maxprofit;
    
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<maxPRofitt(arr , n);
}