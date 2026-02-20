#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;

    int cnt=1;
    int len=word.length();

    for(int i=1; i<len; i++){
        if(word[i]==word[i-1]){
            cnt++;
            if(cnt>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            cnt=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
