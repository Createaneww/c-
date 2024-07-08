#include<iostream>
using namespace std;
// Pass by value (copy of the num goes in the fuction , original does not)
// void dosomething(int num){
//     cout<<num<<endl;
//     num +=10;
//     cout<<num<<endl;
//     num +=5;
//     cout<<num<<endl;

// }
// int main(){
//     int num = 10;
//     dosomething(num);
//     cout<<num<<endl;


// pass by reference (orginal value of the num goes in the fuction)
void dosomething(int& num){
    cout<<num<<endl;
    num +=10;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;

}
int main(){
    int num = 10;
    dosomething(num);
    cout<<num<<"  <- ye main func wala cout hai(changed permanetly)"<<endl;  // value of num is permanently changed


return 0;
}