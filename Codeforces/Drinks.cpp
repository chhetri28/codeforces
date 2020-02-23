    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main(){
        double n,k,sum=0.0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>k;
            sum+=k;
        }
        cout<<fixed<<setprecision(12)<<sum/n<<endl;    
    }