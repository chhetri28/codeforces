#include<bits/stdc++.h>
#define oh_guru_hoja_shuru int main()
#define thooke_tali return 0
using namespace std;
oh_guru_hoja_shuru{
    string s;
    cin>>s;
    bool c=true;
    for (size_t i = 1; i <s.length(); i++)
    {
        if(s[i]>='a'){
            c=false;
            break;
        }
    }
    if(c){
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i]>='a'){
                s[i]-=('a'-'A');//tolower
            }
            else{
                s[i]+=('a'-'A');//toupper
            }
        }
        
    }
    cout<<s;
    thooke_tali;
}
