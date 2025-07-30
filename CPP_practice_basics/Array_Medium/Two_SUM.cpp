#include<bits/stdc++.h>
using namespace std;
bool Two_sum(vector<int>&arr , int n , int target){
    unordered_map<int , int>mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int remaining = target-a;
        if(mpp.find(remaining) != mpp.end()){
            return true;
        }
        mpp[a] = i;
    }
    return false;
    
}

bool two_sum_optimal(vector<int>&arr , int n , int target){
    int left = 0;
    int right = n-1;
    while (left<right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target){
            return true;
        }else if(sum<target){
            left++;
        }else{
            right++;
        }
    }
    return false;
    
}


int main(){
    int n , target;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target";
    cin>>target;

    // cout<<Two_sum(arr , n , target);
    cout<<two_sum_optimal(arr , n , target);
    
}