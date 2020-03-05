#include<bits/stdc++.h>
using namespace std;
int n,x,y,z,xs(0),ys(0),zs(0);
int main(){
    cin>>n;
    while (n--)
    {
        cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
    }
    if(xs==0 and ys==0 and zs==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
