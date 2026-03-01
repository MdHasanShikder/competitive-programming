/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/271/A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    n++;
    int a,b,c,d;
    bool isduplicate=true;
    
    while(isduplicate){
        a=n%10;
        b=(n/10)%10;
        c=((n/10)/10)%10;
        d=(((n/10)/10)/10)%10;
    isduplicate=(a==b || b==c || c==d || d==a || a==c || b==d);
    if(isduplicate){
        n++;
    }else{
        cout<<n<<endl;
        return 0;
    }
    }
    return 0;
}
