// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     arr[0][0] = 6;
//     arr[0][1] = 2;
//     arr[0][2] = 3;
//     arr[1][0] = 5;
//     arr[1][1] = 7;
//     arr[1][2] = 11;      
//     for(int i = 0; i<2 ;i++){   // rows
//         for(int j = 0 ; j<3 ; j++){  // coloumns
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// transpose of the above matrics
#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0] = 6;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 5;
    arr[1][1] = 7;
    arr[1][2] = 11;      
    for(int j = 0; j<3 ;j++){   // rows
        for(int i = 0 ; i<2 ; i++){  // coloumns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
