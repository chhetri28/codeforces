#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
   int n;
   cin>>n;
   int a1[n],a2[n],a3[n];
   for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       a1[i]=a;
       a2[i]=b;
       a3[i]=b;
   }
   int c1(0),c2(0);
   for(int i=0;i<n;i++){
       if(a1[i]==a2[i]){
           c1++;
       }
   }
   sort(a2,a2+n);
   for(int i=n-1,j=0;i>=0;i--,j++){
       if(a2[i]==a3[i]){
           c2++;
       }
   }
   if(c1!=n){
       cout<<"rated";
   }
   else if(c1==n and c2==n){
       cout<<"maybe";
   }
   else{
       cout<<"unrated";
   }
}
