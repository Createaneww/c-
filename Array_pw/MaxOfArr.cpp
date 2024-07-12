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
        mx = max(mx,arr[i]); // short way to find 
    }
    cout<<mx;


}