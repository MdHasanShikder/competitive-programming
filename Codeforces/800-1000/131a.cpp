/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/131/A
*/
#include<iostream>
#include<string>
#include<cctype> //for using lower and upper functions
using namespace std;
int main(){
    string word ;
    cin>>word;
    int len=word.length();  //length of the word string

    int count1=0,count2=0;  //handling the two situations if all characters all uppercase or if the first character is lower and rest all is uppercase
    for(int i=0; i<len; i++){   //for the first case
        if(isupper(word[i])){
            count1++;
        }
    }
    if(islower(word[0])){ //for the second case (first letter is lower then rest all are uppercase)
        for(int i=1; i<len; i++){
            if(isupper(word[i])){
                count2++;
            }
        }
    }
    if(len==1 || (count1==len) || (count2==len-1)){ //combining the three cases
        for(int i=0; i<len; i++){
            if(islower(word[i])){   //if statement for toggle casing, (if uppercase then convert to lower and vice-versa)
                word[i]=toupper(word[i]);
            }else if(isupper(word[i])){
                word[i]=tolower(word[i]);
            }
        }
        cout<<word<<endl;   //then printing the final output
        return 0;
    }else{
        cout<<word<<endl;   //if above all doesn't apply then leave it as it is
    }
    return 0;

}
