#include <iostream>
using namespace std; // N/2 tak hi check karo
int main()
{             // agar factor mil jaye to compiste hai warna prime hai
    int n;    // prime - factor 1 and n
    cin >> n; // composite - factor 1 , n and other factor(more than two factor)
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0){
            cout << "Composite";
        break;
        }
        
    }

}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     for (int i = 2; i <= x / 2; i++)
//     {
//         if (x % i == 0)
//         {
//             cout << "composite";
//             break;
//         }
    
//     }
// }