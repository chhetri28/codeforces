#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    if(a<b){
        cout<<"-1\n";
    }
    else if(b<a){
        cout<<"1\n";
    }
    else if(a==b){
        cout<<"0\n";
    }
}