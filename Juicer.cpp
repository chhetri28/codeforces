#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n,b,d;
    cin>>n>>b>>d;
    ll sum=0,cnt=0;
    while(n--){
        ll a;
        cin>>a;
        if(a>b){
            continue;
        }
        else{
            sum+=a;
            if(sum>d){
                cnt++;
                sum=0;
            }
        }
    }
    cout<<cnt<<endl;
}