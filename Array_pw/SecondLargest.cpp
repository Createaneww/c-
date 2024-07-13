#include<iostream>
#include <limits.h> 
using namespace std;

int main(){
    int arr[] = {1,2,3,4,53,4,23};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i = 0;i< n; i++){
        mx = max(mx,arr[i]); // short way to find 
    }
    int smx = INT_MIN;
    for(int i = 0;i< n; i++){  //agar largest ke equal nhi hai tabhi check karo warna chod do
        if(arr[i] != mx ) smx = max(smx,arr[i]); 
    }
    cout<<smx;
}
