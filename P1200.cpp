#include<bits/stdc++.h>
using namespace std;

string s,t;
int a=1,b=1,m,n;
int main(){
	cin>>s>>t;
	m=s.size();
	n=t.size();
	for(int i=0;i<m;i++) a*=s[i]-64;
	for(int i=0;i<n;i++) b*=t[i]-64;
	if(a%47==b%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
