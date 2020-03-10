#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int min(p),max(p),amz(0);
    while (--n)
    {
        cin>>p;
        if(p<min){
            min=p;
            amz++;
        }
        if(p>max){
            max=p;
            amz++;
        }
    }
    cout<<amz<<endl;
}