#include <bits/stdc++.h>
using namespace std;

int longestsubarr(vector<int> &arr, int n, int k)
{
    map<int, int> presumMap;
    int sum = 0;
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        int remaing = sum - k;
        if (presumMap.find(remaing) != presumMap.end())
        {
            int len = i - presumMap[remaing];
            maxlen = max(maxlen, len);
        }

        if (presumMap.find(sum) == presumMap.end())
        { // agar map me nhi he tabhi dalo , warna mat dalo
            presumMap[sum] = i;
        }
    }
    return maxlen;
}

int longestSubArr(vector<int> &arr, int n, int k)
{
    map<int, int> mpp;
    int sum = 0;
    int maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }

        int remaining = sum - k;
        if (mpp.find(remaining) != mpp.end())
        {
            int len = i - mpp[remaining];
            maxlen = max(maxlen, len);
        }
        if (mpp.find(sum) == mpp.end())
        {

            mpp[sum] = i;
        }
    }
    return maxlen;
}

int OPtimal_longestSubarr(vector<int>&arr , int n , int k){
    int maxlen = 0;
    int sum = arr[0];
    int left = 0;
    int right = 0;
    while (right<n)     
    {
        while (left<=right && sum>k)    
        {
            sum -= arr[left];
            left++;
        }

        if(sum == k){
             maxlen = max(maxlen , right-left+1);
        }

        right++;
        if(right<n){
            sum += arr[right];
        }

    }
    return maxlen;
    
}
int main()
{
    int n;
    cout << "Enter the size of arr" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k" << endl;
    cin >> k;
    // int result = longestsubarr(arr, n, k);
    // int result = longestSubArr(arr, n, k);
    int result = OPtimal_longestSubarr(arr, n, k);

    cout << result;
}