#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast do{ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);} while(0);
#define endl "\n"
#define mod 1000000007

bool isPrime(ll n){
    if(n == 1)
        return false;
    for(ll i = 2; i*i <= n; i++)
        if(n % i == 0)
            return false;

    return true;
}

bool check(ll n){
    double sqroot = sqrt(n);
    if(sqroot - (ll)sqroot == 0){
        ll temp = (ll)sqroot;
        if(isPrime(temp))
            return true;
        else
            return false;
    }
    else{
        return false;
    }
}

int main(){
	fast;
	ll n; cin >> n;
	vector<ll> v;

    for(ll i = 1; i <= n; i++){
        ll item; cin >> item;
        v.push_back(item);
    }

    for(auto x : v){
        if(check(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
