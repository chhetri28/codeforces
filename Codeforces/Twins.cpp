#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s1(0),s2(0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    sort(a,a+n);
    int cnt(0);
    for(int i=n-1;i>=0;i--){
        if(s2>s1/2)break;
        cnt++;
        s2+=a[i];
    }
    cout<<cnt<<endl;
}

