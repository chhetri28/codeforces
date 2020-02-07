#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>a;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        a.push_back(c);
    }
    int cntr=0;
    int cntn=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='r'){
            cntr++;
        }
        if(a[i]=='n'){
            cntn++;
        }
    }
    if(cntn==0){
        for(int i=0;i<cntr;i++){
            cout<<0<<" ";
        }
    }
    if(cntr==0){
        for(int i=0;i<cntn;i++){
            cout<<1<<" ";
        }
    }
}