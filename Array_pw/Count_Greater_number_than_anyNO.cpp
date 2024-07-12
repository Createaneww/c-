#include<iostream>    // can be done witrh user input Array (Already done in Minimum)
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,53,23};
    // int n = sizeof(arr)/4;
    int count = 0;
    int x = 4;
    for(int i = 0;i<6; i++){
        if(arr[i]>x){
            count++;
            cout<<arr[i]<<" ";
        }
        
    }
    


}