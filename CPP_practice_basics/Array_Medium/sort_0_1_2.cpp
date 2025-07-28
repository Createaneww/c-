#include<bits/stdc++.h>
using namespace std;
// 1- brute i.e Merge Sort
void Merger(vector<int>&arr , int low , int mid , int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while (left<=mid && right<=high)
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    for (int i = low; i < high; i++)
    {
        arr[i] = temp[i-low];
    }
    
    
}
void Sort_0_1_2(vector<int>&arr ,int low , int high){
    if(low == high) return;
    int mid = (low+high)/2;
    Sort_0_1_2(arr , low , mid);
    Sort_0_1_2(arr , mid+1 , high);
    Merger(arr , low , mid , high);

}

// 2 - Better i.e usind 3 counter
void sorting012(vector<int>&arr , int n){
int cnt0 = 0 ; 
int cnt1 = 0;
int cnt2 = 0;
for (int i = 0; i < n; i++)
{
    if(arr[i] == 0) cnt0++;
    else if(arr[i] == 1) cnt1++;
    else cnt2++;
}

for (int i = 0; i < cnt0; i++)
{
    arr[i] = 0;
}
for (int i = cnt0; i < cnt0 + cnt1; i++)
{
    arr[i] = 1;
}
for (int i =cnt0 + cnt1 ; i <n; i++)
{
    arr[i] = 2;
}



}


//optimal Dutch national flag algorithm
void dutchnationalflag(vector<int>&arr , int low , int mid , int high){
    while (mid<=high)
    {
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Sort_0_1_2(arr , 0 , n);
    // sorting012(arr , n);
    dutchnationalflag(arr,  0 ,  0 , n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}