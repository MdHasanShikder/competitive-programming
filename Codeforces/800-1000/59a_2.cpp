#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string word;
    cin>>word;

    //concept: 1. for-each or ranged based loop
            // 2. <cctype> header file, isupper(),islower(),toupper(),tolower()
    int upper=0;
    for(char c: word)
        if(isupper(c)) upper++;
    int lower=word.length()-upper;
    if(upper>lower)
        for(char& c: word) c=toupper(c);
    else
        for(char& c: word) c=tolower(c);
    cout<<word<<endl;
    return 0;
}
