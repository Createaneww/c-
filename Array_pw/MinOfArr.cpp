// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no. of terms of you want to Print in ARR"<<endl;
//     cin>>n;
//     cout<<"Enter the elements of Arr"<<endl;
//     int arr[n];
//     for(int i = 0;i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     int mn = arr[0];
//     for(int i = 1; i<n-1;i++){
//         // if(arr[i]<mn){    //method 1
//         //     mn = arr[i];
//         // }
//         min(arr[i],mn);  //method 2
//     }
//     cout<<mn<<endl;;
// }

#include<iostream>    // can be done witrh user input Array (Already done in Minimum)
using namespace std;

int main(){
    int arr[] = {1,2,3,4,53,4,23};
    int n = sizeof(arr)/4;
    int mx =  arr[0];
    for(int i = 1;i< n; i++){
        // if(arr[i]> mx){
        //     mx = arr[i];  // more logical way is this 
        // }
        mx = min(mx,arr[i]); // short way to find 
    }
    cout<<mx;


}