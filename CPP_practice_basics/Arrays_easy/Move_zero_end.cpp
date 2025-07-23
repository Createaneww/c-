#include<bits/stdc++.h>
using namespace std;

void MoveZeroEnd(vector<int> &arr , int n){
    int j;
    //finding first zero
    for(int i = 0 ; i<n ; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    //now doing swaping with non zero elemnts;
    for(int i = j+1 ; i<n ; i++){
        if(arr[i] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
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

    MoveZeroEnd(arr ,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}