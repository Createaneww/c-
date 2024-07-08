#include<iostream>
using namespace std;
// void printName(string s){   // void parameterised and non parameterised
//     cout<<"Hey"<<s;
// }
// int main(){
//     string s;
//     cin>>s;
//     printName(s);



// take two numbers and print its sum;
int sum(int a, int b){
    int num3 = a + b;
    return num3;                // THIS IS CALLED RETURN FUNC;
    
}

int main(){
    int num1 ,num2;
    cin>> num1 >> num2;
    int res = sum(num1 ,num2);
    cout<<res;

}

