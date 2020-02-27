#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    bool l=true;//1
    int diff(0);//==>diff=0
    n/=2;
    for(size_t i=0;i<n;i++){
        if((s[i]!='4' and s[i]!='7')||(s[n+i]!='4' and s[n+i]!='7')){
            l=false;
            break;
        }
        diff+=(s[i]-s[n+i]);
    }
    //cout<<diff;
    l=l and(diff==0);
    cout<<(l ?"YES":"NO")<<endl;
    return 0;
}