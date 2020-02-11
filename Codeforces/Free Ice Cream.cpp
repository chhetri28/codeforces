#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,x;
    cin>>n>>x;
    ll cnt=0;
    while(n--){
        char c;
        ll t;
        cin>>c>>t;
        if(c=='+'){
            x+=t;
        }
        else if(c=='-'){
            if(x<t){
            cnt++;
            }
            else{
                x-=t;
            }
        }
    }
    cout<<x<<" "<<cnt;
}