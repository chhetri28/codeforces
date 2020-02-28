#include<bits/stdc++.h>
#define oh_guru_hoja_shuru int main()
#define thooke_tali return 0
using namespace std;
int a[7],n,i;
oh_guru_hoja_shuru{
    int n;
    cin>>n;
    int a[8]={0};
    for(int i=1;i<=7;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    n=(n-1)%a[7]+1;
    for(int d=1;i<=7;i++){
        if(a[i]>=n){
            cout<<i<<endl;
            break;
        }
    }
    thooke_tali;
}
