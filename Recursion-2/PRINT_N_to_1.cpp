//wap to print n to 1 numbers
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    else cout<<n<<endl;
    print(n-1);
    
}
int main(){
    int n;
    cin>>n;
    print(n);

return 0;
}