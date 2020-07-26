#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a,ll n){
    int ans=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans=ans*a;//multiple with a if last bit of n is 1
        }
        a=a*a;//square up
        n=n>>1;//discard the last bit 
    }
    return ans%10;
}
int main(){
    ll n;
    cin>>n;
	if(n==0){
		cout<<1<<endl;
	}
	else{
			int rem=n%4;
	if(rem==0){
		cout<<6<<endl;
	}
	else{
		cout<<power(8,rem)<<endl;
	}
	}
}