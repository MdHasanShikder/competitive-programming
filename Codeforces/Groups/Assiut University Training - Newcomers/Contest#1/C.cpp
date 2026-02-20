#include<iostream>
using namespace std;
int main(){
    char ch,new_ch;
    cin >> ch;
    if(ch>='a' && ch<'z') {
        new_ch= ch+1;
        cout << new_ch;
    }
    else if(ch=='z') cout << "a";
    return 0;
}