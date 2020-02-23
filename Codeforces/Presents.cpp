#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    map<int ,int> mp;
    for (size_t i = 1; i <=n; i++)
    {   cin>>a;//takes input
        mp[a]=i;//puts in map and map with index
    }
    for (size_t i = 1; i <=n; i++)
    {
        /* code */
        cout<<mp[i]<<" ";
    }
    
}