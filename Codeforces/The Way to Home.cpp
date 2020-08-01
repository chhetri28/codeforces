#include<bits/stdc++.h>
// #define OJ \
//     freopen("input.txt", "r", stdin); \
//     freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
   // OJ;
    FIO;
    int n,d;
    cin>>n>>d;
    string a;
    cin>>a;
    int dist[n];
    fill(dist,dist+n,10000);
    dist[0]=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            for(int j=0;j<=d;j++){
                if(i+j<n and a[i+j]=='1'){
                    dist[i+j]=min(dist[i+j],dist[i]+1);
                }
            }
        }
    }
    if(dist[n-1]==1e4){
        cout<<-1;
    }
    else{
        cout<<dist[n-1];
    }
    return 0;
}