#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[100005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cA=0,cD=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            cA++;
        }
        else{
            cD++;
        }
    }
    if(cA>cD){
        cout<<"Anton"<<endl;
    }
    else if(cD>cA){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}