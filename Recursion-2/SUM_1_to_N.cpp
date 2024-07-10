#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;     // dry run is must in recursion.*VERY IMPORTANT!!!.
    return n + sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);


}