// #include<bits/stdc++.h>
// using namespace std;
// void Selection_Sort(int arr[] , int n ){
//     for(int i = 0 ; i<=n-2 ; i++){
//         int mini = i;
//         for(int j = i ; j<=n-1 ; j++){
//             if(arr[j]<arr[mini]){
//                 mini = j;
//             }
//         }
//         swap(arr[mini] , arr[i]);
//     }

// }
// int main(){
//     int n;
//     cin>>n;
// int arr[n];
// cout<<"Enter the elements of arr you want to sort"<<endl;
// for(int i = 0 ; i<n ; i++){
//     cin>>arr[i];
// }
//  Selection_Sort(arr ,  n);
// cout<<"Your sorted arr using selection sort"<<endl;
//  for(int i = 0 ; i<n ; i++){
//     cout<<arr[i]<<" ";
//  }
// }

#include<bits/stdc++.h>
using namespace std;

void Selction_Sort(vector<int> &arr , int n){
    for(int i = 0 ; i<=n-2 ; i++)  {
        int mini = i;
        for(int j = i ; j<=n-1 ;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

vector<int> selectionSort(vector<int>& nums , int n) {
        vector<int>sorted;
        // int n = nums.size();
        for(int i = 0 ; i<=n-2 ; i++){
            int mini = i;
            for(int j = i ; j<=n-1 ; j++){
                if(nums[j] < nums[mini]){
                    mini = j;
                }
            }
            int temp = nums[mini];
            nums[mini] = nums[i];
            nums[i] = temp;
        }
        for(int i = 0 ; i<n ; i++){
            sorted.push_back(nums[i]);
        }
        return sorted;

    }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    // Selction_Sort(arr , n);
    selectionSort(arr , n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}