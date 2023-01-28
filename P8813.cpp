#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	long long a;
	cin>>m>>n;
	a=pow(m,n);
	if(a>0&&a<=1000000000) cout<<a;
	else cout<<-1;
	return 0;
} 
