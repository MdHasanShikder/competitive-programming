/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/723/A
    notes:
    #include <cstdlib> // For integer abs()
    #include <cmath>   // For floating-point abs()
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin>>a>>b>>c;

    //everyone comes at point 'a'
    int dis_a = abs(b-a) + abs(c-a);
    //everyone comes at point 'b'
    int dis_b = abs(a-b) + abs(c-b);
    //everyone comes at point 'c'
    int dis_c = abs(a-c) + abs(b-c);

    cout<< min(dis_a, min(dis_b, dis_c));
}