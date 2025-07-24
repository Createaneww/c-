#include<bits/stdc++.h>
using namespace std;

//brute approch
int Missingno(vector<int>&arr, int n){
    
    // int NUM = 5;
    for (int i = 1; i <n; i++)
    {
        int flag = 0;
        for (int j = 0; j <=n-1; j++)
        {
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
        
    }
    
}


//better approch
int missing(vector<int>&arr ,int n){

    vector<int>hash(n+1 , 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <=n; i++)
    {
        if(hash[i] == 0){
            return i;
        }
    }
    
    
}


//optimal approch
int Missing(vector<int> &arr , int n){
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // int result = Missingno(arr , n);
    int result = missing(arr , n);

    cout<<"The Missing numebr is - "<<result;
    
}