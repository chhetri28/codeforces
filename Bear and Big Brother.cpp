#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=1;
    while(a<b){
        a*=3;
        b*=2;
        if(a<=b){
            c++;
        }
    }
    cout<<c<<endl;
}