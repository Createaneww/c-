#include<bits/stdc++.h>
using namespace std;

int longestsubarr(vector<int>&arr , int n , int k){
    map<int , int> presumMap;
    int sum = 0;
    int maxlen = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];

        if(sum == k){
            maxlen = max(maxlen , i+1);
        }

        int remaing = sum - k;
        if(presumMap.find(remaing) != presumMap.end()){
            int len = i - presumMap[remaing];
            maxlen = max(maxlen , len);
        }
        
        if(presumMap.find(sum) == presumMap.end()){  // agar map me nhi he tabhi dalo , warna mat dalo
            presumMap[sum] = i;

        }

    }
    return maxlen;
}

int main(){
    int n;
    cout<<"Enter the size of arr"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    int result = longestsubarr(arr , n , k);

    cout<<result;
}