#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c1=0,c2=0;
    c1=count(s.begin(),s.end(),'4');
    c2=count(s.begin(),s.end(),'7');
    //cout<<c1<<" "<<c2<<endl;
    if(c1+c2==4 || c2+c1 ==7 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
