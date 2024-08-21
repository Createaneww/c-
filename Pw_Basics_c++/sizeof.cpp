#include<iostream>
using namespace std;
int c = 167;
int main(){
    int a,b,c;
    float d = 13.4;
    long double e = 13.4;
    cout<<"Enter the value of A :\n";
    cin>>a;
    cout<<"Enter the value of B :\n";
    cin>>b;
    c = a+b;
    cout<<"The sum of two numbers is :"<<c<<endl;
    cout<<"The global variable is :"<<::c<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is :"<<e<<endl;
    cout<<"The size of 13.4 is :"<<sizeof(13.4)<<endl;
    cout<<"The size of 13.4f is :"<<sizeof(13.4f)<<endl;
    cout<<"The size of 13.4F is :"<<sizeof(13.4F)<<endl;
    cout<<"The size of 13.4l is :"<<sizeof(13.4l)<<endl;
    cout<<"The size of 13.4Lis :"<<sizeof(13.4L)<<endl;
    return 0;
    
}