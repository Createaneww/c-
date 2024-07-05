#include<iostream>
using namespace std;
void print1(int n){     // spaure
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){     // * triangle
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){     // number triangle
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print4(int n){     // repeating number triangle
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){     // Ulta triangle number triangle
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){     //number wala Ulta triangle number triangle
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print7(int n){     //Pyramid
    for(int i = 0; i<n; i++){  // rows
        for(int j = 0; j<n-i-1; j++){  //space
            cout<<"  ";
        }
        for(int j = 0; j< 2*i+1; j++){  // stars
            cout<<"* ";
        }
        for(int j = 0; j<n-i-1; j++){   // space
            cout<<"  ";
        }

        cout<<endl;
    }
}

void print8(int n){     // (reverse)Ulta Pyramid
    for(int i = 0; i<n; i++){  // rows
        for(int j = 0; j<i; j++){  //space
            cout<<"  ";
        }
        for(int j = 0; j< 2*n-(2*i+1); j++){  // stars
            cout<<"* ";
        }
        for(int j = 0; j<i; j++){   // space
            cout<<"  ";
        }

        cout<<endl;
    }
}

void print9(int n){     // (reverse)Ulta Pyramid + seedha pyramid = diamond
    for(int i = 0; i<n; i++){  // rows
        for(int j = 0; j<n-i-1; j++){  //space
            cout<<"  ";
        }
        for(int j = 0; j< 2*i+1; j++){  // stars
            cout<<"* ";
        }
        for(int j = 0; j<n-i-1; j++){   // space
            cout<<"  ";
        }

        cout<<endl;
    }
    for(int i = 0; i<n; i++){  // rows
        for(int j = 0; j<i; j++){  //space
            cout<<"  ";
        }
        for(int j = 0; j< 2*n-(2*i+1); j++){  // stars
            cout<<"* ";
        }
        for(int j = 0; j<i; j++){   // space
            cout<<"  ";
        }

        cout<<endl;
    }
}

void print10(int n){
    for(int i = 1; i<=2*n-1; i++){
        int stars = i;
        if( i>n) stars = 2*n-i;
        for(int j = 1; j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print11(int n){
    int start = 1;
    for(int i = 0;i<n;i++){
        if(i%2 == 0){
            start = 1;
        }else{
            start = 0;
        }
        for(int j = 0; j<=i ; j++){
            cout<<start<<" ";
            start = 1- start;
        }
        cout<<endl;
    }
}

void print12(int n){
    int space = 2*(n-1);
    for(int i = 1; i<=n; i++){
        // numbers
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        // space
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }

        // numbber
        for(int j = i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}

void print13 (int n){      // 1234... wala triangle
    int counter = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=i; j++){
            cout<<counter<<" ";
            counter += 1;
        }
        cout<<endl;
    }
}

void print14(int n){    // ABCD wala triangle
    for(int i = 0; i<n; i++){
        for(char j = 'A' ; j<= 'A'+ i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){     // Ulta triangle ABCD triangle
    for(int i = 0; i<n; i++){
        for(char j = 'A'; j<='A'+ n-i-1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){     // Ulta triangle ABCD triangle
    for(int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(char j= 0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void print17(int n){     //Pyramid
    for(int i = 0; i<n; i++){  // rows
        for(int j = 0; j<n-i-1; j++){  //space
            cout<<"  ";
        }
        // alphabets  
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 0; j<2*i+1; j++){
            cout<<ch<<" ";
            if(j < breakpoint) ch++;
            else ch--;
        }
        for(int j = 0; j<n-i-1; j++){   // space
            cout<<"  ";
        }

        cout<<endl;
    }
}

void print18(int n){   
    for(int i = 0; i<n; i++){
        for(char j = 'E'- i ; j<='E'; j++){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}

void print19(int n){
    int iniSpace = 0;
    for(int i = 0; i<n ; i++){
        // stars
        for(int j = 0; j<n-i; j++){
            cout<<"* ";
        }

        // spaces
        for(int j = 0; j<iniSpace; j++){
            cout<<"  ";
        }


        // stars
        for(int j = 0; j<n-i; j++){
            cout<<"* ";
        
        }
        iniSpace += 2;
        cout<<endl;
    }

    iniSpace = 2*n-2;
    for(int i = 1; i<=n ; i++){
        // stars
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }

        // spaces
        for(int j = 0; j<iniSpace; j++){
            cout<<"  ";
        }


        // stars
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        
        }
        iniSpace -= 2;
        cout<<endl;
    }
}

void print20(int n){
    int spaces = 2*n-2;
    for(int i = 1; i<= 2*n-1; i++){
        int star = i;
        if(i>n) star = 2*n -i;
        //stars
        for(int j = 1;j<= star ;j++){
            cout<<"*";
        }
        // spaces
        for(int j = 1; j<= spaces; j++){
            cout<<" "; 
        }
        //stars
        for(int j = 1;j<= star ;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }
}

void print21(int n){
    for(int i = 0; i<n ;i++){
        for(int j = 0 ; j<n ; j++){
            if(i== 0 || i == n-1 || j== 0 || j == n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print21(n);

return 0;
}