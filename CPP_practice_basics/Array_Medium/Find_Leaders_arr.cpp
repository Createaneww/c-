#include<bits/stdc++.h>
using namespace std;

vector<int>Leaders(vector<int>&arr , int n ){
    vector<int>ans;
    int leader;
    for (int i = 0; i < n; i++)
    {
        leader = true;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]>arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true) ans.push_back(arr[i]);
        
    }
    return ans;
    
    
}


vector<int> OptimalLeaders(vector<int>&arr , int n){
    int maxi = INT_MIN;
    vector<int>ans;
    for (int i = n-1; i >=0; i--)
    {
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi , arr[i]);
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    // vector<int> result = Leaders(arr , n);
    vector<int> result = OptimalLeaders(arr , n);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}