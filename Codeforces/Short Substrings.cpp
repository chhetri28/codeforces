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
	int t;
	cin>>t;
	while(t--){
		string s,r;
		cin>>s;
		r+=s[0];
		for(int i=1;i<s.size()-2;i++){
			if(s[i]==s[i+1]){
				r+=s[i];
				i++;
			}
		}
		r.push_back(s[s.size()-1]);
		cout<<r<<endl;
	}
}
// optimized one
// string s,r;
// cin>>s;
// r=s.substr(0,2);
// for(int i=3;i<s.size();i+=2){
//     r+=s[i];
// }
// cout<<r<<endl;