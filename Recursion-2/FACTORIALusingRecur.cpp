#include<iostream>
using namespace std;      // Recursion is like stairs (Phele utro fir chado)
int fact(int n){
    if(n == 0 || n==1) return 1;     // dry run is must in recursion.*VERY IMPORTANT!!!.
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);


}