#include<iostream>
using namespace std;

void printNtimes(int i, int n){
    if(i>n) return;
    cout<<"Magzie"<<endl;
    printNtimes(i+1,n);
}
int main(){
    int n;
    cin>>n;
    printNtimes(1, n);

}

/*********************other ways***************************************************/

// #include<iostream>
// using namespace std;
// int cnt = 0;
// void printNtimes( int n){
//     if(cnt == n) return;
//     cout<<"Magzie"<<endl;
//     cnt++;
//     printNtimes(n);
// }
// int main(){
//     int i,n;
//     cin>>n;
//     printNtimes( n);

// }
