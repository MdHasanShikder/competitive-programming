#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    cin>>word;

    int len=word.length();
    int upper=0, lower=0;
    for(int i=0; i<len; i++){
        if(word[i]>='a' && word[i]<='z'){
            lower++;
        }else{
            upper++;
        }
    }
    for(int i=0; i<len; i++){
        if((lower>upper)||(lower==upper)){
           if(word[i]>='A' && word[i]<='Z'){
                word[i]=word[i]+32;
           }else{
                word[i]=word[i];
           }

        }else{
            if(word[i]>='a' && word[i]<='z'){
                word[i]=word[i]-32;
            }else{
                word[i]=word[i];
            }
        }

    }
    cout<<word<<endl;
    return 0;
}
