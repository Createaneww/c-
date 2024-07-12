#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter all your elements of ARR :"<< endl;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        if(i%2 !=0){
            arr[i] *= 2 ;
        }else{
            arr[i] += 10; 
        }
        cout<<arr[i]<<" ";
    }
    

}