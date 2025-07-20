#include <bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[], int n)
{
    for(int i = 0 ; i<=n-1 ; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }

    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of arr you want to sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Insertion_sort(arr, n);
    cout << "Your sorted arr using selection sort" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}