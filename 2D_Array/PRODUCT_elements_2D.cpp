#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[4][2] = {{1,25},{2,15},{3,19},{4,18}};
    int pro = 1;
    for(int i = 0; i<4; i++){
        for(int j = 0 ; j<2; j++){
            pro *= arr[i][j];
        }
        
    }
    cout<<pro;

}