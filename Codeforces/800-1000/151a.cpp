/*
    author: hasan
    problem link: https://codeforces.com/problemset/problem/151/A
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalMl = k*l;  //total ml
    int totalSc = c*d;  //total slice
    //p is total salt
    //for each toast needs: nl milli drink & np gram salt & a slice from totalSc
    int toast = 0;  //overall toast

    while((totalMl > 0) && (totalSc > 0) && (p > 0)){
        totalMl -= nl;  //drink in milli
        p -= np;    //salt
        totalSc--;  //slices of lime

        toast++;
        if((p < np) || (totalMl < nl)) break;
    }
    cout << toast/n;
    
}