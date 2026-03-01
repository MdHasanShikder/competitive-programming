#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"1"<<endl;
        }else{
            int max=arr[0];
            for(int i=1; i<n; i++){
                if(max<arr[i]){
                    max=arr[i];
                }
            }
            int maxcheck=0;
            for(int i=0; i<n; i++){
                if(max==arr[i]){
                    maxcheck++;
                }
            }
            cout<<maxcheck<<endl;
        }
    }
    return 0;
}