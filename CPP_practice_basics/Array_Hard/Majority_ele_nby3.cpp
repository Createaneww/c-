#include<bits/stdc++.h>
using namespace std;
vector<int> MajorityElement(vector<int>&arr , int n){
    int mini = (int)(n/3)+1;
    int cnt1 = 0;
    int ele1 = INT_MIN;
    int cnt2 = 0; 
    int ele2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(cnt1 == 0 && ele2 != arr[i]){
            cnt1 = 1;
            ele1 = arr[i];
        }
        else if(cnt2 == 0 && ele1 != arr[i]){
            cnt2 = 1;
            ele2 = arr[i];
        }
        else if(arr[i] == ele1) cnt1++;
        else if(arr[i] == ele2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }

    }

    vector<int>ls;
    cnt1 = 0 , cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == ele1) cnt1++;
        if(arr[i] == ele2) cnt2++;
    }
    if(cnt1 >= mini) ls.push_back(ele1);
    if(cnt2 >= mini) ls.push_back(ele2);


    
    return ls;
    
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> result = MajorityElement(arr , n);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
    
}