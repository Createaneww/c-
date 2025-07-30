#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &arr, int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        
        sum += arr[i];
        if (sum > maxi){
            maxi = sum;
           
        }
        if (sum < 0){

            sum = 0;
        }
    }
    return maxi;
}

vector<int> printmaxsubarr(vector<int>&arr , int n){
    int sum = 0;
    int maxi = INT_MIN;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        if(sum == 0) start = i;

        sum += arr[i];
        if (sum > maxi){
            maxi = sum;
            ansStart = start , ansEnd = i;
        }
        if (sum < 0){

            sum = 0;
        }
    }
    for (int i = ansStart; i <=ansEnd; i++)
    {
        temp.push_back(arr[i]);
    }
    return temp;
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
    // cout << kadaneAlgo(arr, n);
    vector<int>result = printmaxsubarr(arr , n);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
}