/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1829/B
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        //number of max spaces (means consecutive elements consisting of only 0s)
        int max=0;
        int spaces=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                spaces++;
                if(spaces > max) { max=spaces; }
            }else{
                spaces=0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
