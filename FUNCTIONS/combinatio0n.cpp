// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int r;
//     cout<<"Enter the number"<<endl;
//     cin>>r;
//     int a= 1;
//     for(int i  = 1; i<=n; i++){
//         a *= i;
//     }
//     int b= 1;
//     for(int i  = 1; i<=r; i++){
//         b*= i;
//     }
//      int c = 1;
//     for(int i  = 1; i<=n-r; i++){
//         c*= i;
//     }
//     cout<<a/(b*c);
// }


//***************Now with the help of funcs*********** */
#include<iostream>
using namespace std;
int fact(int x){
    int prodcut = 1;
    for(int i = 1;i<=x;i++){
        prodcut *= i;
    }
    return prodcut;
}
int main(){
    int n , r;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int a  = fact(n);
    int b  = fact(r);
    int c  = fact(n-r);
    cout<<a/(b*c);
}