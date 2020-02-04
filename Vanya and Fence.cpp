#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int sum=0;
    while(n--){
        int f;
        cin>>f;
        
        if(f<=h){
            sum+=1;
        }
        else{
            sum+=2;
        }
    }
    cout<<sum<<endl;
}