#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&arr , int x){
    int ans = -1;
    int n = arr.size();
    int low = 0 , high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
    
} 


int main(){
    int x;
    cin>>x;
    vector<int>arr = {1,2,3,3,5,8,8,10,10,11};
    //lower bound(index of the first ele i.e arr[i]>=target(x))
    cout<<lowerbound(arr , x);
}