#include<iostream>
using namespace std;
void greet(){
    cout<<"hello sir";
    greet();
}
int main(){
    greet();

}