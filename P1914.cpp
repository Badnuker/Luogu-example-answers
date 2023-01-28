#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;
int main(){
	cin>>m>>s;
	n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]>=char('a')&&s[i]<='z'-m) cout<<char(s[i]+m);
		else cout<<char(s[i]-26+m);
	}
	return 0;
}
