#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini,maxi;
    for(int i=0;i<n;i++){
        if(i==0){
            mini=a[1]-a[0];
            maxi=a[n-1]-a[0];
        }
        else if(i==(n-1)){
            mini=a[n-1]-a[n-2];
            maxi=a[n-1]-a[0];
        }
        else{
            mini=a[i]-a[i-1];
            if(a[i+1]-a[i]<mini){
                mini=a[i+1]-a[i];
            }
            maxi=a[n-1]-a[i];
            if(a[i]-a[0]>maxi){
                maxi=a[i]-a[0];
            }
        }
    cout<<mini<<" "<<maxi<<endl;
    }
}