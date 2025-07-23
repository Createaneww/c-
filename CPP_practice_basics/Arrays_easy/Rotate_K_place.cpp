#include <bits/stdc++.h>
using namespace std;

void Roatete_by_kplace(vector<int> &arr, int n, int k)
{
    k = k % n;
    vector<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }

    // shifting
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // putting ele of temp into arr
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}

void optimalrotate(int arr[], int n, int k)
{
    reverse(arr , arr+k);
    reverse(arr+k , arr+n);
    reverse(arr , arr+n);
}

int main()
{
    int n;
    cout << "Enter the size of arr - ";
    cin >> n;

    int k;
    cout << "Enter value of k - ";
    cin >> k;
   int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    optimalrotate(arr, n, k);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}