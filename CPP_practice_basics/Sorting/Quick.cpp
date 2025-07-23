#include<bits/stdc++.h>
using namespace std;

int Partition_Func(vector<int> arr , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while (arr[i] <= pivot && i < high-1)
        {
            i++;
        }
        while (arr[j]>= pivot && j>low+1)
        {
            j++;
        }
        if(i<j) swap(arr[i] , arr[j]);
        
    }
    swap(arr[low] , arr[high]);
    return j;
}

void Quick_Sort(vector<int>arr , int low , int high){
    if(low<high){
        int Partition = Partition_Func(arr , low , high);
        Quick_Sort(arr , low , Partition-1);
        Quick_Sort(arr , Partition+1 , high);
    }
}

int main(){
     int n ;
     cin>>n;
     vector<int>arr(n);
     for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
     }
     Quick_Sort(arr , 0 , n-1);

     for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
     }
}