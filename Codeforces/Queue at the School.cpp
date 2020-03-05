#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t>>s;
    while(t--){
        for (size_t i = 1; i <n; i++)
        {
            if(s[i]=='G' and s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout<<s<<endl;
}