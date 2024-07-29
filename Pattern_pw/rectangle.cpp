#include<iostream>
using namespace std;
int main(){
    int R,C;
    cout<<"Enter number of rows"<<endl;
    cin>>R;
    cout<<"Enter number of columns"<<endl;
    cin>>C;
    for(int i=1; i<=R; i++){         // rows wala loop
        for(int j = 1; j<=C; j++){   // coloumn wla loop
            cout<<"* ";
        }
        cout<<endl;
    }
}