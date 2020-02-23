#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[1001];
    cin>>arr;
    // dertermine the firs and last position
    int fst=0;
    int lst=0;
    //find first non .char
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]!='.'){
            fst=i;
            break;
        }
    }
    //find last non .char
    for(int i=n-1;i>=0;i--){
        if(arr[i]!='.'){
            lst=i;
            break;
        }
    }
    // we have 3 cases:RRRRRRR,LLLLLLLL,RRRRRLLLL;
    if(arr[fst]=='R' and arr[lst]=='R'){
        cout<<fst+1<<" "<<lst+1+1<<endl;
    }
    else if(arr[fst]=='L' and arr[lst]=='L'){
        cout<<lst+1<<" "<<fst-1+1<<endl;
    }
    else if(arr[fst]=='R' and arr[lst]=='L'){
        for(int i=fst;i<n;i++){
            lst=i;
            if(arr[i]=='L'){
                break;
            }
        }
        cout<<fst+1<<" "<<lst-1+1<<endl;
    }
    return 0;
}