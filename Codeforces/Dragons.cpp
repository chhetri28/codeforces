#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int >>vec;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end());
    int f=1;
    
    for(int i=0;i<n;i++){
        if(vec[i].first<s){
            s+=vec[i].second;
        }
        else{
            f=0;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }
}