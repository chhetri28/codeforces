#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
   map<string,bool> mp;
   map<string,string> gems;
   map<string,bool>::iterator it;
   gems["purple"]="Power";
   gems["gems"]="Time";
   gems["blue"]="Space";
   gems["orange"]="Soul";
   gems["red"]="Reality";
   gems["yellow"]="Mind";
   mp["purple"]=false;
   mp["green"]=false;
   mp["blue"]=false;
   mp["orange"]=false;
   mp["red"]=false;
   mp["yellow"]=false;
   for(int i=1;i<=n;i++){
       cin>>s;
       mp[s]=true;
   }
   cout<<6-n<<endl;
   for (it=mp.begin(); it!=mp.end(); it++)
            if (it->second == false)
                cout<<gems[it->first].c_str();
}
