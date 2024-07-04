// #include<iostream> //1,2,4,8,16.......(GP) gp me common ratio lete hai
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int f;
//     for(int i = 1;i<n;i++){
//         if(n%i==0){ //highest factor hume store kara liya f me (f=i)
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y){
            continue;
        }else{
            cout<<x<<" "<<y<<endl;
        }
    }
}
