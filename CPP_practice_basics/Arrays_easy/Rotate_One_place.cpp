#include<bits/stdc++.h>
using namespace std;

void Roatete_by_oneplace(vector<int>&arr ,int n ){
    int ele_to_rotated = arr[0];
    int i = 1;
    while (i<n)
    {
        arr[i-1] = arr[i];
        i++;
    }
    arr[n-1] = ele_to_rotated;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    Roatete_by_oneplace(arr , n);

    for(int i = 0  ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}