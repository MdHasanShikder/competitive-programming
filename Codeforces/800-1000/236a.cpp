/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/236/A
*/
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    string s; cin >> s;
    unordered_set <char> ch(s.begin(), s.end());
    
    if(ch.size()%2==1) cout <<"IGNORE HIM!";   //if odd, it's a boy
    else cout<<"CHAT WITH HER!"; //if even, it's a girl

    return 0;
}

/*
    i can use for each loop also:
    for(char c : s){
        ch.insert(c);
    }
*/