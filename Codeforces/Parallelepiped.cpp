#include<bits/stdc++.h>
using namespace std;
int main(){
    double s1,s2,s3;
    cin>>s1>>s2>>s3;
    double a,b,c;
    
    a=sqrt(s1*s2/s3);
    b=sqrt(s3*s1/s2);
    c=sqrt(s2*s3/s1);
    double sum=a+b+c;
    cout<<4*sum<<endl;
}