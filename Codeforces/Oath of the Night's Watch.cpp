#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	//OJ;
	FIO;
	ll n;
	cin>>n;
	ll a[n];
	int c1(0),c2(0);
	ll maxi=INT_MIN;
	ll mini=INT_MAX;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
		mini=min(mini,a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==maxi)c1++;
		if(a[i]==mini)c2++;
	}
	if(maxi==mini) cout<<0<<endl;
	else cout<<(n-c1-c2)<<endl;
}