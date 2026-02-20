#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string word1,word2,word3;
        cin>>word1>>word2>>word3;
        cout<<word1[0]<<word2[0]<<word3[0]<<'\n';
    }
    return 0;
}
