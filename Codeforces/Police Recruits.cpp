#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    
    int c=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0){
             c++;
             sum=0;
        }
        else{
            continue;
            }
        //sum=0;
    }
    
    cout<<c<<endl;
    
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
}