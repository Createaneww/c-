// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;
//     cout<<"Enter all your elements of ARR :"<< endl;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
        
//     }
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]*arr[i]<<" ";
//     }

// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int squares[n];
   
    for (int i = 1; i <= n; i++) {
        squares[i-1] = i * i;  // Store the square of i in the array
    }

    // Print the elements of the array
    cout << "Squares of natural numbers up to " << n << " are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << squares[i] << " ";  // Print each element followed by a space
    }
    cout << endl;
}
