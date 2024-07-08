#include<iostream>
using namespace std;

int main(){
    int i;     // i is initialised outside i.e we are getting 6
    for(i = 1; i<=5; i++){  // agar loop me i initialise karte to uska scope loop tak hi hota
        cout<<i<<" "<<"Striver"<<endl;
    }
    cout<<i;    

return 0;
}


