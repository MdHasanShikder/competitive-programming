/*
    author: hasan2
    learning:
    1. The formula for the sum (S) of the first 'n' natural numbers is: s=n*(n+1)/2
    2. in vs code editor, to prevent horizontal scrolling press Alt+Z, do same to reverese.
    3. to run a cpp file in vs code manually, type in terminal:
    g++ your_filename.cpp -o output_program_name
    .\output_program_name.exe
    4. to view terminal shortcut: Ctrl+`
    5. to hide/disable the ai agent mode in vs code, simply press on the upper top right square shaped boxes.
    6. if i want sum of natural numbers from m to n, the formula is sum(m->n)=n*(n+1)/2-m*(m+1)/2
    we don't need to invent new formula, just we have to substract the sum of 1 to m from sum of 1 to n. in this way we can get sum of m to n of natural numbers.
}
*/
#include<iostream>
using namespace std;
int main(){
    long long N;
    cin>>N;
    cout<<N*(N+1)/2<<endl;
    return 0;
}
