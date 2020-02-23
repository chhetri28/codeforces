#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>a;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        a.push_back(x);
    }
    if(a[0]=='S' and a[n-1]=='F'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}