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
int a[1001],b[1001],c[1001];
int n;
int x,y;
int main(){
	//OJ;
	FIO;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		a[i]=x;
		b[i]=y;
		c[i]=y;
	}
	int c1(0),c2(0);
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			c1++;
		}
	}
	sort(b,b+n);
	int j=0;
	for(int i=n-1;i>=0;i--)
	{
		if(b[i]==c[j])
		 ++c2;
		 j++;

	}
	if(c1!=n){
		cout<<"rated\n";
	}
	else if(c1==n and c2==n){
		cout<<"maybe\n";
	}
	else{
		cout<<"unrated\n";
	}
}
