#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int maxV=0;
    int minV=1000;
    int maxI=0;
    int minI=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>maxV){
            maxI=i;
            maxV=x;
        }
        if(x<=minV){
            minI=i;
            minV=x;
        }
    }
    if(maxI>minI){
        cout<<(maxI-1)+(n-minI)-1;
    }
    else{
        cout<<(maxI-1)+(n-minI);
    }
}