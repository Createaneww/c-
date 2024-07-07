// #include<iostream>
// using namespace std;

// void printNtimes(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     printNtimes(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     printNtimes(1, n);

// }

/***********************Back tracking method***************************************/

#include<iostream>
using namespace std;

void printNtimes(int i, int n){
    if(i<1) return;
    printNtimes(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    printNtimes(n, n);

}