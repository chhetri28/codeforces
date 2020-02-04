    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int a[3];
    int main(){
        ll int n,k;
        cin>>n>>k;
        while(k--){
            int t=n%10;
            if(t!=0){
                n-=1;
            }
            else{
                n/=10;
            }
        }
        cout<<n<<endl;
    }