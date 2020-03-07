#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    while(1){
        n+=1;
        int a=n/1000;
        int b=n/100%10;
        int c=n/10%10;
        int d=n%10;
        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            break;
        }
    }
    cout<<n;
    
}