/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/158/A
*/
/*
    // Either use [] everywhere
        if (score[i] >= score[k-1] && score[i] > 0)

    // Or use .at() everywhere (safer, checks bounds)
        if (score.at(i) >= score.at(k-1) && score.at(i) > 0)
        For competitive programming, [] is fine and slightly faster.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    vector<int> score(n);

    for(int i=0; i<n; i++){
        cin>>score[i];
    }

    int c=0;
    for(int i=0; i<n; i++){
        if((score[i]>=score.at(k-1)) && score[i]>0){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
