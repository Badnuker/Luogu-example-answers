#include<bits/stdc++.h>
using namespace std;

stack<int> sta;
int s;
int main(){
	int a,b;
	char c;
	cin>>a;
	a%=10000;
	sta.push(a);
	while(cin>>c>>b){
		if(c=='*'){
			int t=sta.top();
			sta.pop();
			sta.push(t*b%10000);
		}else{
			sta.push(b);
		}
	}
	while(sta.size()){
		s+=sta.top();
		s%=10000;
		sta.pop();
	}
	cout<<s;
	return 0;
}

