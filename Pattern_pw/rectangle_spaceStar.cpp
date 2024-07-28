#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the value of row : ";
    cin>>r;
    cout<<"Enter the value of coloumn : ";
    cin>>c;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            if(i == 1 || j == 1 || i== r || j == c){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}