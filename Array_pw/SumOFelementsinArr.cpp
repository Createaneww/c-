#include<iostream>
using namespace std;

int main(){
    int n , sum = 0;
    cout<<"enter number of term u want to print in ARR"<<endl;
    cin>>n;
    cout<<"Enter the elements of your ARR"<<endl;
    int arr[n];
    for(int i = 0; i<=n-1 ; i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum;
    

}