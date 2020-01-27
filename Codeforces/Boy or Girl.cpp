#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        int j=i+1;
        while(j<s.length()){
            if(s[i]==s[j]){
                s.erase(j,1);
            }
            else{
                j++;
            }
        }
    }
    //cout<<s<<endl;
    
   // cout<<s.length();
    
    if(s.length()%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}