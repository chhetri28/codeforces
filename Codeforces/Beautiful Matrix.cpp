#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int I=0,J=0;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t  j= 0; j<5; j++)
        {
            if(a[i][j]==1){
                I=i;
                J=j;
            }
        }
    }
    int row=abs(2-I);
    int col=abs(2-J);
    cout<<row+col<<endl;
}