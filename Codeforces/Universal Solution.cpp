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
// #define OJ \
//     freopen("input.txt", "r", stdin); \
//     freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);



int main(){
   // OJ;
    FIO;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<pair<int,char> >a(3);
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                a[1].first++;
            }
            if(s[i]=='P'){
                a[2].first++;
            }
            if(s[i]=='S'){
                a[0].first++;
            }
        }
        a[0].second='R';
        a[1].second='P';
        a[2].second='S';
        sort(a.begin(),a.end(),greater<>());
        for(int i=0;i<s.size();i++){
            cout<<a[0].second;
        }
        cout<<"\n";
    }
}