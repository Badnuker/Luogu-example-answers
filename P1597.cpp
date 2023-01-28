#include<bits/stdc++.h>
using namespace std;

int a,b,c;
string s;
int main(){
	cin>>s;
	int m=s.size();
	for(int i=0;i<m;i++){
		if(s[i]=='a'){
			if(s[i+3]=='b') a=b;
			else if(s[i+3]=='c') a=c;
			else if(s[i+3]=='a') ;
			else a=s[i+3]-'0';
			i+=3;
		}else if(s[i]=='b'){
			if(s[i+3]=='a') b=a;
			else if(s[i+3]=='c') b=c;
			else if(s[i+3]=='b') ;
			else b=s[i+3]-'0';
			i+=3;
		}else if(s[i]=='c'){
			if(s[i+3]=='a') c=a;
			else if(s[i+3]=='b') c=b;
			else if(s[i+3]=='c') ;
			else c=s[i+3]-'0';
			i+=3;
		}
	}
	cout<<a<<' '<<b<<' '<<c;
	return 0;
} 
