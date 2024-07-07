// #include<iostream>
// using namespace std;

// void printNtimes( int n){
//     if(n<1) return;
//     cout<<n<<endl;
//     printNtimes(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     printNtimes(n);

// }

/************************Back tracking method*********************************************/
#include<iostream>
using namespace std;

void printNtimes(int i, int n){
    if(i>n) return;
    printNtimes(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;  
    cin>>n;
    printNtimes( 1 ,n);

}