/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/228/A
*/
#include <iostream>
#include <set>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> num;   //set removes duplicate elements, stores the unique values only and rearrange in order
    int n=4;
    int x;
    while(n--){
        cin>>x;
        num.insert(x);
    }
    cout<<4-num.size();
    return 0;
}