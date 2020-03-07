#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for (size_t i = 3; i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a;
    for(int i=n+1;i<=m;i++){
        if(isprime(i)){
            if(i==m){
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO\n";
                break;
            }
        }
    }
    cout<<"NO"<<endl;
}