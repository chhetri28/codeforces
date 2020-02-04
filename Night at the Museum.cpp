#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int g = 'a' - 'a';// take  entry input
	int sum = 0;
	for (int i = 0; i < a.size(); i++){
		int c = int(a[i] - 'a');// convert the char in int
		//cout<<a[i]<<" "<<c<<endl;
		int b = abs(g - c);//take the abs value
		//cout<<a[i]<<" "<<b<<endl;
		sum += min(b, 26 - b);
		g = a[i] - 'a';
	}
	cout << sum;
}
/*
*/