#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            char x=s[i];
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[n-1];
}