#include<bits/stdc++.h>
#define oh_guru_hoja_shuru int main()
#define thooke_tali return 0
using namespace std;
oh_guru_hoja_shuru{
    string s;
    cin>>s;
    int f=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            f=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!f){
        cout<<"NO"<<endl;
    }
    
    thooke_tali;
}