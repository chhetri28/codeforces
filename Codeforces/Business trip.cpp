#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int k;
    cin>>k;
    vector<int>vec;
    for(int i=0;i<12;i++){
        int p;
        cin>>p;
        vec.pb(p);
    }
    sort(vec.begin(),vec.end());
    int n=vec.size();
    int m=0,sum=0;
    int f=0;
    if(k==0){
        cout<<0<<endl;
        f=1;
    }   
    for(int i=n-1;i>=0 && !f;i--){
        sum+=vec[i];
        m++;
        if(sum>=k){
            f=1;
            cout<<m<<endl;
            break;
        }
    }
    if(!f){
        cout<<-1<<endl;
    }
}