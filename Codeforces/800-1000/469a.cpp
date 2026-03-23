/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/469/A
*/
#include <iostream>
#include <set>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p,q;
    cin>>n>>p;

    set<int> unique;
    int level;
    for(int i=0; i<p; i++){
        cin>>level;
        unique.insert(level);
    }
    
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>level;
        unique.insert(level);
    }

    cout << ((int)unique.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
    //unique.size()     returns a size_t value,
    //to compare it with a integer n value
    //i converted it to integer
    return 0;   
}