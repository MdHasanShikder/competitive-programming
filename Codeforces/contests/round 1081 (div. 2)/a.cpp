//codeforces contest round 1081 (div. 2)
// this code is wrong, isn't solved or met the required question pattern or solution.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    string s;
    vector<char> w(n);

    while(t--){
        cin>>n>>s;
        int i=0,j=0,k=0;
        bool isAnyDuplicate= false;
        for(i=1; i<n; i++){     //i=1 represent the second char
            if(s[i]==s[i-1]){
                isAnyDuplicate=true;
                break;
            }
        }
        if(isAnyDuplicate){

        for(j==i; j<n; j++){   //j start from the first duplicate char
            w[j-i]=s[j];    //from the duplicate char to the last one, to a new string
         //last part of s to first part of w     //copying the last set of char, in the new string first part
        }
        for(k=0; k<i; k++){     //coping the first set of char, in the new strings later part
            w[k+j]=s[k];
        //first part of s to last part of w
        }
        }
        int countScore=1,m;
        for(m=1; m<n; m++){
            if(w[m]!=w[m-1]){
                countScore++;
            }
        }
        cout<<countScore<<endl;
    }
}
