#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        bool odd=false,even=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            odd|=x%2!=0;//checking if any element is odd 
            even|=x%2==0;//checking if any element is even
        }
        if(sum%2!=0||(odd and even))cout<<"YES\n";
        else cout<<"NO\n";
    }
}