#include<iostream>
using namespace std;

int main(){
    int x = 6;
    int y = 8;
    cout<<x<<" "<<y <<endl;
    // int temp = x;
    // x=y;
    // y = temp;

    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y;

return 0;
}