#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[]={4,7,47,74,44,444,447,474,477,777,774,744};
    int size=sizeof(a)/sizeof(int);
    int f=0;
    for(int i=0;i<size;i++){
        if(n%a[i]==0){
            f=1;
            break;
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}