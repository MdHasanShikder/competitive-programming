/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/791/A
*/
#include <iostream>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int year = 0;
    
    while (a < b+1) { // a cannot be equal to b, so to make the program work, the condition is a < b+1
    a *= 3;
    b *= 2;
    year++;
    }
    
    cout<<year;
    return 0;
}