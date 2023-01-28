#include<bits/stdc++.h>
using namespace std;

string s;
int n=1,sum;
int main(){
	cin>>s;
	for(int i=0;i<11;i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum+=(s[i]-'0')*n;
			n++;
		}
	}
	sum%=11;
	if(sum!=s[12]-'0'){
		if(sum==10&&s[12]=='X'){
			cout<<"Right";
			return 0;
		}
		if(sum==10) s[12]='X';
		else s[12]=sum+'0';
	}else{
		cout<<"Right";
		return 0;
	}
	cout<<s;
	return 0;
}
