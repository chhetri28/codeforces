#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        bool r(false),l(false),lo(false),up(false);
        for(int j=0;j<n;j++){
            if(x[j]>x[i] and y[j]==y[i])r=true;
            if(x[j]<x[i] and y[j]==y[i])l=true;
            if(x[j]==x[i] and y[j]<y[i])lo=true;
            if(x[j]==x[i] and y[j]>y[i])up=true;
        }
        if(r and l and lo and up) cnt++;
    }
    cout<<cnt<<endl;
}