#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string word;
    cin>>n>>word;

    int anton=0;
    for(char c : word)
        if(c=='A') anton++;
    int danik=word.length()-anton;

    if(anton>danik)
        cout<<"Anton"<<endl;
    else if(anton==danik)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;

    return 0;
}
