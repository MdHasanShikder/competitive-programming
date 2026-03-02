#include<iostream>
#include<string>
using namespace std;
using ll=long long;
int main(){
    string s;
    cin>>s;
    
    ll count=1;
    ll high=1;
    ll size=s.size();

    for(ll i=1; i<=size; i++){
        if(s[i]==s[i-1]){
            count++;
        }else{
            if(count>high){
                high=count;
            }
            count=1;            
        }
    }

    cout<<high<<endl;
    return 0;
}