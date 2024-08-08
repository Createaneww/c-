// #include<iostream>
// using namespace std;
// int main(){
//     int n ,di;
//     cin>>n;
//     int i = 0;
//     while(n!=0){
//         n = n/10;
//         i++;
//     }
//     cout<<i;
    
// }
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    for( i = 0; n!=0 ;i++ ){
    n = n/10;
    }
    cout<<i;
return 0;
}