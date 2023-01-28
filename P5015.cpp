#include<bits/stdc++.h>
using namespace std;

string s; 
int n;
int main(){
	getline(cin,s);
	int m=s.size();
	for(int i=0;i<m;i++){
		if(s[i]!=' '&&s[i]!='\n') n++;
	}
	cout<<n;
	return 0;
}
