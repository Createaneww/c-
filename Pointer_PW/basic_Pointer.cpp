#include<iostream>
using namespace std;
int main(){
    int x = 1;
    int* p = &x;
    cout<<p<<endl;   // address of x stores in p
    cout<<&x<<endl; 
    cout<<x<<endl;   //  We can access the value of variable whose address is stored in the pointer                        */
    cout<<*p<<endl;  //using deference operator(*)
    cout<<&p<<endl;   
}