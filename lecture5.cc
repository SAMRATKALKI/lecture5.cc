#include<iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 0;
    // bitwise operators
    if (a&1){
        cout<<"true"<<endl;
    } 
    else{
        cout<<"false"<<endl; 
    }
    // bitwise operators
    int c = 4;
    int d = 5;
    cout<<"and operator - "<<(c&d)<<endl; // got an error due to absence of ()
    cout<<"or operator - "<<(c|d)<<endl;
    cout<<"not operator - "<<(~d)<<endl;
    cout<<"xor operator - "<<(c^d)<<endl;

    // left shift and right shift 
    cout<<"left shift - "<<(c<<1)<<endl;
    cout<<"right shift - "<<(c>>1)<<endl;

    // incriment and decriment

    cout<<"post incriment - "<<(a + (b++))<<endl;
    cout<<"pre incriment - "<<(a + (++b))<<endl;

    // fibonacci series by for loop 
    int e ;
    cout<<"no of to print the fibonacci series - ";
    cin>>e;
    int g  = 0 ;
    int h = 1;
    cout<<0<<" "<<1<<" ";
    for  (int f=1;f<=e;f++){
        int next  = g+h;
        cout<<next<<" ";
        g = h;
        h = next ;
    }
    cout<<endl;


    // break statement
    int i = 0; 
    for (;;){
        if(i<=10){
            cout<<i<<" ";
             i+=1;
        }
        else{
            break;
        }    
    }
    cout<<endl;

    // continue statment 
    for (int j=0; j<12;j++){
        if (j!=5){
            cout<<j<<endl;
        }
        else{
            continue;
        }
    }

    // global variable and local variable
    int k = 1;
    if (k<=10){
        cout<<k<<endl;
        int k = 6;
        cout<<k<<endl;
    }
    cout<<k<<endl;
    
    




















}