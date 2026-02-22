/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/131/A
*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string word;
    cin>>word;

    bool allCharUpperExceptFirst = true;    //assume its true
    for(int i=1; i<word.length(); i++){   //checking is it really?
        if(islower(word[i])){       //if any lower found
            allCharUpperExceptFirst=false;  //declare it false
            break;                  //then break the for loop instantly
        }
    }
    if(allCharUpperExceptFirst){    //if above loop doesn't make any change, the value remains true and this loop runs
        for(char &c:word){       //using for-each (range based) loop, to toggle case the characters (if lower convert to upper and vice versa)
    //for taking input in for-each (range based) loop, must put an ampersand (&) before the variable (before : declared thing is variable)
            if(islower(c)) c=toupper(c);
            else c=tolower(c);
        }
    }
    cout<<word<<endl;   //if any of the make changes the changed word or if doesn't make any change then the unchanged word is printed
    return 0;
}
