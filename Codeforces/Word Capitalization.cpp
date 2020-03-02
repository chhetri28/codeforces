#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;s[i];i++){
        if(i==0 and islower(s[i])){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
}