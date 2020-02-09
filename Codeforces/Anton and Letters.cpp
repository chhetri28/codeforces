#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cin>>ws;
    set<char>st;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            st.insert(s[i]);
            //cout<<s[i]<<" ";
        }
        else{
            continue;
        }
    }
    cout<<st.size()<<endl;
}