#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l(0),r(0);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        l+=x;
        r+=y;
    }
    cout<<min(l,n-l)+min(r,n-r);
}