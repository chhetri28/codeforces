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
	OJ;
	FIO;
	int n,m;
	cin>>n>>m;
	vector<int>prime;
	for(int i=2;i<=60;i++){
		int c(0);
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				c++;
				break;
			}
		}
		if(c==0 and i!=1){
			prime.PB(i);
		}
	}
	vector<int>::iterator it1,it2;
	it1=find(prime.begin(),prime.end(),n);
	it2=find(prime.begin(),prime.end(),m);
	if(it2-it1==1){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}