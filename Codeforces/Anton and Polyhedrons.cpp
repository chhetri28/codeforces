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
    int n;
    cin>>n;
    int c(0);
    string s;
    while(n--){
        cin>>s;
        if(s=="Tetrahedron"){
            c+=4;
        }
        else if(s=="Cube" ){
            c+=6;
        }
        else if(s=="Octahedron"){
            c+=8;
        }
        else if(s=="Dodecahedron"){
            c+=12;
        }
        else if(s=="Icosahedron"){
            c+=20;
        }
    }
    cout<<c<<endl;
}