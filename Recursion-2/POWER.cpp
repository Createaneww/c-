#include<iostream>
using namespace std;      // Recursion is like stairs (Phele utro fir chado)
int power(int a,int b){
    if(b == 0) return 1;     // dry run is must in recursion.*VERY IMPORTANT!!!.
    return a * power(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter base : "<<endl;
    cin>>a;
    cout<<"Enter power : "<<endl;
    cin>>b;
    cout<<power(a,b);

}