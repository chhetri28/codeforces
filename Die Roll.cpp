#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string die[6]={'1/6','1/3','1/2','2/3','5/6','1/1'};
    int x=max(n,m);
    cout<<die[6-x];
    return 0;
}