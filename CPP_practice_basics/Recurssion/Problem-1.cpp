#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void ntimesnames(int n, string s)
{ // TC - o(n)
    if (cnt == n)
    {
        return;
    }
    cout << s << endl;
    cnt++;
    ntimesnames(n, s);
}

void ntimesname(int i, int n, string s)
{ // TC - o(N)
    if (i > n)
    {
        return;
    }
    cout << s << endl;
    ntimesname(i + 1, n, s);
}

void Print1toN(int i, int n)
{
    if (i > n)
        return;

    cout << i << " ";
    Print1toN(i + 1, n);
}

void PrintNtoOne(int i, int n)
{
    if (n < i)
    {
        return;
    }
    cout << n << " ";
    PrintNtoOne(i, n - 1);
}

// backtracking
void P1toN(int i, int n)
{

    if (i < 1)
    {
        return;
    }
    P1toN(i - 1, n);
    cout << i << " ";
}

// backtracking
void PNtoOne(int i, int n)
{
    if (i > n)
        return;

    PNtoOne(i + 1, n);
    cout << i << " ";
}


//parameterrized
void Sum_of_N_numbers(int n, int sum)
{
    if(n<1){
        cout<<sum;
        return;
    }
        
    Sum_of_N_numbers(n-1 , sum + n);
   
}


//funtional method
int SUM_ofN(int n){
    if(n == 0) return 0;
    return n + SUM_ofN(n-1);
}



//Factorial of N

int facto(int n){
    if(n == 0) return 1;

    return n * facto(n-1);
}
int main()
{
    int n;
    cin >> n;
    // string s;
    // getline(cin, s);
    // ntimesnames(n , s);
    // ntimesname(1 , n , s);
    // Print1toN(1, n);
    // PrintNtoOne(1, n);
    // P1toN(n , n);
    // PNtoOne(1 , n);

//    Sum_of_N_numbers(n, 0);
//    int res = SUM_ofN(n);
// cout<<res;
cout<<facto(n);

}