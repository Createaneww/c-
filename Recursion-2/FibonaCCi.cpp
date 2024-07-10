#include<iostream>
using namespace std;    // HUmesha maths ka formula banana hai recursion me
int fibbo(int n){
    if(n==1 || n== 2){
        return 1 ;
    }    // dry run is must in recursion.*VERY IMPORTANT!!!.
    return fibbo(n-1) + fibbo(n-2);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fibbo(n);


}