/*
    author: hasan2
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int count = 1;
        for(int i=0; i<n; i++){
            if(s[i]=='R'){ count++; }
            else { break; }
        }
        cout << count <<endl;
    }
    return 0;
}