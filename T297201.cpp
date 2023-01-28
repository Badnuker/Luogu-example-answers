#include<bits/stdc++.h>
using namespace std;

string s;
int main(){
	getline(cin,s);
	int m=s.size();
	for(int i=0;i<m;i++){
		if(s[i]!=' '){
			if(s[i]>='a'&&s[i]<='z'){
				s[i]=char(s[i]-32);
			}
			i++;
			while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
				if(s[i]>='A'&&s[i]<='Z'){
					s[i]=char(s[i]+32);
				}
				i++;
			}
			i--;
		}	
	}
	int op=0,ed=m;
	while(s[op]==' '){
		op++;
	}
	while(s[ed-1]==' '){
		ed--;
	}
	for(int i=op;i<ed;i++){
		cout<<s[i];
	}
	return 0;
}

