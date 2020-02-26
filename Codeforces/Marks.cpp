#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>marks(n);
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    vector<bool>success(n,false);
    for(int sub=0;sub<m;sub++){
        char best='0';
        for(int i=0;i<n;i++){
            if(marks[i][sub]>best){
                best=marks[i][sub];
            }
        }
        for(int i=0;i<n;i++){
            if(marks[i][sub]==best){
                success[i]=true;
            }
        }
    }
    cout<<count(success.begin(),success.end(),true);
    return 0;
}