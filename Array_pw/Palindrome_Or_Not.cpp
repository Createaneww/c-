#include<iostream>

using namespace std;

int main(){
    int a[] = {1,2,3,4,5};
    
    int n = sizeof(a)/4;
    for(int i = 0;i< n; i++){
        cout<<a[i]<<" ";
    }
// reverse of array by using swapping
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i = 0;i< n; i++){
        
        cout<<a[i]<<" ";
    }
    





}