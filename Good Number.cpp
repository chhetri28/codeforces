#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
int a[10];
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int a=0;
    for(int i=0;i<n;i++){
        //loop till n
        int val=0;//take a var
        for(int j=0;j<=k;j++){
            //loop till k and check first number with next k elements
            if(v[i].find(to_string(j))!=-1){
                ++val;
            }
            if(val==k+1){
                a++;
            }
        }
    }
    cout<<a<<endl;
}

