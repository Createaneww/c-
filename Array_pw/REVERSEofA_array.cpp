#include<iostream>

using namespace std;

int main(){
    int a[] = {1,2,3,4,53,4,23};
    int n = sizeof(a)/4;
    int b[n];

    for(int i = 0;i< n; i++){
        int j = n-1-i;      // here formla by comparing indexes is *i+j = n-1*
        b[i] = a[j];
        cout<<b[i]<<" ";
        
    }
    // for(int i = 0;i< n; i++){
    //     cout<<b[i]<<" ";
        
    // }

}