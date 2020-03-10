#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll sum=0;
        for (ll i = 1; i <=n; i++)
        {
            ll t;
            cin>>t;
            sum+=t;
        }
        cout<<min(sum,m)<<endl;
    }
}