#include <bits/stdc++.h>
using namespace std;
// if there are equal number of positives and negatives
vector<int> Rearrangearr(vector<int> &arr, int n)
{
    int PosiIndex = 0;
    int NegiIndex = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[PosiIndex] = arr[i];
            PosiIndex += 2;
        }
        else
        {
            ans[NegiIndex] = arr[i];
            NegiIndex += 2;
        }
    }
    return ans;
}

// if there are non-equal no.of positives and negatives;
void nonequalposiandnegi(vector<int> &arr, int n)
{
    vector<int> Posi;
    vector<int> Negi;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            Posi.push_back(arr[i]);
        }
        else
        {
            Negi.push_back(arr[i]);
        }
    }

    if (Posi.size() > Negi.size())
    {
        for (int i = 0; i < Negi.size(); i++)
        {
            arr[2 * i] = Posi[i];
            arr[2 * i + 1] = Negi[i];
        }

        int index = Negi.size() * 2;
        for (int i = Negi.size(); i < Posi.size(); i++)
        {
            arr[index] = Posi[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < Posi.size(); i++)
        {
            arr[2 * i] = Posi[i];
            arr[2 * i + 1] = Negi[i];
        }
        int index = Posi.size() * 2;
        for (int i = Posi.size(); i < Negi.size(); i++)
        {
            arr[index] = Negi[i];
            index++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    nonequalposiandnegi(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}