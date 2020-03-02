#include<bits/stdc++.h>
#define oh_guru_hoja_shuru int main()
#define thooke_tali return 0
using namespace std;
oh_guru_hoja_shuru{
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;++i){
    string s;
    cin>>s;
        if(s[0] =='+'){
            ++x;
        }
        if(s[0]=='-'){
        --x;
        }
        if(s[2]=='+'){
        x++;
        }
        if(s[2]=='-'){
        x--;
        }
    }        
    cout<<x<<endl;
    thooke_tali;
}