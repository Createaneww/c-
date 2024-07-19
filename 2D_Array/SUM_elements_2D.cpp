#include<iostream>   // if limits are given then termination of i and j should be changed
#include <limits.h>  // Like find the sum of rectangle formed from (r1,c1) to (r2,c2).
using namespace std;     
int main(){
    int arr[4][2] = {{1,25},{2,15},{3,19},{4,18}};
    int sum = 0;
    for(int i = 0; i<4; i++){
        for(int j = 0 ; j<2; j++){
            sum += arr[i][j];

        }
        
    }
    cout<<sum;

}