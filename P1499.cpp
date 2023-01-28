#include<bits/stdc++.h>
using namespace std;

string s;
int a[55],t,m;
int main(){
	getline(cin,s);
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]>='0'&&s[i]<='9'){
			t=t*10+s[i]-'0';
		}else if(s[i]=='.'){
			a[m]=t;
			m++;
			t=0;
		}else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			m--;
			int x=a[m];
			m--;
			int y=a[m];
			if(s[i]=='+'){
				a[m]=x+y;
			}else if(s[i]=='-'){
				a[m]=y-x;
			}else if(s[i]=='*'){
				a[m]=x*y;
			}else if(s[i]=='/'){
				a[m]=y/x;
			}
			m++;
			t=0;
		}
	}
	m--;
	cout<<a[m];
	return 0;
}
