#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;   
        int l=s.length();
        if(l>10){
        string n=to_string(s.length()-2);
        string temp;
        char x=s[0];
        char y=s[l-1];
        cout<<x<<n<<y<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}