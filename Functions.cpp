#include <bits/stdc++.h>
using namespace std;
// Types of functions
//  1) Void >>> Does not return something
//  2) Return
//  3) Parameterrized
//  4) Non-Paramen=terized

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void PrintName()
{
    cout << "Manvar's PVT LMT";
}

int main()
{
    PrintName();
    cout << endl;
    int a = 10, b = 15;
    // cout << sum(a, b);
    int result = sum(a, b);
    cout << result;
}