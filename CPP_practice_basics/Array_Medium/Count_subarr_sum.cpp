#include <bits/stdc++.h>
using namespace std;

int BetterCountSubarr(vector<int>&arr , int n , int k){
    int cnt = 0; 
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            if(sum == k){
                cnt++;
            }
        }
        
    }
    return cnt;
    
}


int OptimalCountSubarr(vector<int>&arr , int n, int k){
    unordered_map<int , int>mpp;
    mpp[0] = 1;
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int remove = sum - k;
        cnt += mpp[remove];
        mpp[sum] += 1;
    }
    return cnt;
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the sum you want to check" << endl;
    cin >> k;
    // cout << BetterCountSubarr(arr, n, k);
    cout << OptimalCountSubarr(arr, n, k);
}