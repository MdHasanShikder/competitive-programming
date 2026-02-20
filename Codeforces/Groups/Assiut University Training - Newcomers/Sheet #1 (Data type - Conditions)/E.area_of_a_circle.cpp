/*
 author: hasan2
 Learning:
 1. <iomanip> library/header file to print specific decimal numbers
 2. for this the code format is: fixed<<setprecision(9) 
    here 9 means 9 digits after decimal point.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float R;
    cin>>R;
    cout<<fixed<<setprecision(9)<<3.141592653*R*R<<endl;
    return 0;
}