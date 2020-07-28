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
int p,q,n;
int a[250];
int main(){
	OJ;
	FIO;
	cin>>n;
	cin>>p;
	for(int i=0;i<p;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=p;i<p+q;i++){
		cin>>a[i];
	}
	sort(a,a+(p+q));
	set<int>s;
	for(int i=0;i<p+q;i++){
		s.insert(a[i]);
	}
	if(n==s.size()){
		cout<<"I become the guy.\n";
	}
	else{
		cout<<"Oh, my keyboard!\n";
	}
	return 0;
}