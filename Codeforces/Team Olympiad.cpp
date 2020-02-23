    #include<bits/stdc++.h>
    using namespace std;
    queue<int>a,b,c;
    int  main(){
        int n,c1,c2,c3,q;
        c1=c2=c3=0;
        cin>>q;
        for(int i=1;i<=q;i++){
            cin>>n;
            if(n==1){
                c1++;
                a.push(i);
            }
            else if(n==2){
                c2++;
                b.push(i);
            }
            else{
                c3++;
                c.push(i);
            }
        }
        int mini=min(c1,min(c2,c3));
        cout<<mini<<endl;
        while(mini--){
            cout<<a.front()<<" "<<b.front()<<" "<<c.front()<<endl;
            a.pop();
            b.pop();
            c.pop();
        }
        return 0;
    }