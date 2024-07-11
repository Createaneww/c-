#include<iostream>
using namespace std;

int main(){
    int arr[6];
    cout<<"Enter your array"<<endl;
    for(int i = 0 ; i<=5 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i<=5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0] = 99;
        for(int i = 0 ; i<=5 ; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}