#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(a>b){
            int p=a-b;
            if(p%2==0){
                cout<<1<<endl;
            }
            else {
                cout<<2<<endl;
            }
        }
        else if(b>a){
            int p=b-a;
            if(p%2!=0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}