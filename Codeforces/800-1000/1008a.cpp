/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1008/A
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;

    int l = s.length()-1;   //last index
  
    //if last index is consonant, so then the ans is "NO"
    if(s[l]!='a' && s[l]!='e' && s[l]!='i' && s[l]!='o' && s[l]!='u' && s[l]!='n'){
            cout<<"NO";
            return 0;
        }
    for(int i=0; i<l; i++){ //we are looping till before the last index
        if(s[i]=='n') continue; //there is an exception for n;
        //if all are consonant except 'n'
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='n'){
            //if there is no vowel after consonant except 'n'
            if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u'){
                cout<<"NO"; //print this
                return 0;   //terminate the program
            }
        }
    }
    cout<<"YES";    //if above any condition doesn't match so it's "YES"
    return 0;
}
