/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/746/B
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin>>s;

    //null string or the string before decode
    string f(n, ' '); //n sized string, filled with spaces

    //if odd then put the first one in the middle index
    if(n%2==1) {
        //if odd then first one is the middle one
        f[n/2] = s[0]; //(n/2)+1 is the middle element, to match with index, (n/2)+1-1 = n/2
    }
    
    //now number of iterations is always n/2
    //i would have to work pair wise
    int x = n-1-1, y = n-1; //(x,y) is the last pair of given string
    for(int j=0; j<n/2; j++){
        f[j] = s[x];    //x is the char before y, going to the first char
        f[n-1-j] = s[y];    //y is the last char, going to the last char
        x -= 2; //every iteration (x-2, y-2) change its position of pair
        y -= 2;
    }
    cout<<f;
    return 0;
}