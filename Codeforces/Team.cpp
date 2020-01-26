#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n--){
        int c1=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                c1++;
            }
        }
        if(c1>=2){
            c++;
        }
    }
    cout<<c<<endl;
}