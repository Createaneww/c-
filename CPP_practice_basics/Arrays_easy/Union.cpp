#include <bits/stdc++.h>
using namespace std;
vector<int> UnionOfArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    int i = 0, j = 0;

    vector<int> UNI;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (UNI.size() == 0 || UNI.back() != arr1[i])
            {
                UNI.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (UNI.size() == 0 || UNI.back() != arr2[j])
            {
                UNI.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (UNI.size() == 0 || UNI.back() != arr2[j])
        {
            UNI.push_back(arr2[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (UNI.size() == 0 || UNI.back() != arr1[i])
        {
            UNI.push_back(arr1[i]);
        }
        i++;
    }
    return UNI;
}
int main()
{
    int n1;
    cout << "Enter size arr1"<<endl;
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of arr1" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter size arr2"<<endl;
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of arr2";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> result = UnionOfArray(arr1, arr2, n1, n2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}