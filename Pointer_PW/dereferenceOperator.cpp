#include<iostream>
using namespace std;
int main(){
    int x = 132;
    int* ptr = &x;
    cout<<x<<endl;
    *ptr = 99;  // change the value of x with the help of its address
    cout<<x<<endl;
    
     
}