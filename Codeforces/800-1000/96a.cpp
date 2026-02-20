#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;

    //single quotation represent characters. e.g. word[4]=='0'

    int cnt=0;
    int len=word.length();

    for(int i=0; i<len; i++){
        if(word[i]=='1'){
            cnt++;
            if(cnt>=7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            cnt=0;
        }
    }
    cnt=0;      //this was the bug in my code, i didn't reset cnt before going to second loop
    for(int i=0; i<len; i++){
        if(word[i]=='0'){
            cnt++;
            if(cnt>=7){
                cout<<"YES"<<endl;      //also this was bug, because wrongly i wrote "NO"
                return 0;
            }
        }else{
            cnt=0;
        }
    }

    if(cnt<7) cout<<"NO"<<endl;
    return 0;

}
