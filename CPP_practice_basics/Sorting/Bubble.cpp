// #include <bits/stdc++.h>
// using namespace std;
// void Bubble_sort(int arr[], int n)
// {
//     int didswap = 0;
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 didswap = 1;
//             }
//         }

//         if (didswap == 0)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of arr you want to sort" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     Bubble_sort(arr, n);
//     cout << "Your sorted arr using selection sort" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr , int n){
    int didswap = 0;
    for(int i = n-1 ; i>=1 ; i--){
        for(int j = 0 ; j<=i-1 ;j++ ){
            if(arr[j]>arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                didswap = 1;
            }
            }
            cout<<didswap<<endl;
            if(didswap == 0) break;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
bubble_sort(arr  ,n);
    
cout<<"Your sorted array"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}