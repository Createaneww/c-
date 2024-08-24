#include<iostream>
#include<string>
using namespace std;        // null char issliye hota because vo bata haikaha str khatm ho rahi hai

int main(){                 // size = 13 but 12 dikha raha hai
    string s = "Parthy Patel";  // \0 = Null character whose ASCII value = 0
    cout<<s.length();   // size() --- is function se bhi ho jata hai 
return 0;
}