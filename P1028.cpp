#include<bits/stdc++.h>
using namespace std;

int n,f[1005];

int dfs(int x){
	if(x==1) return 0;
	if(f[x]) return f[x];
	f[x]=x/2;
	for(int i=1;i<=x/2;i++){
		f[x]+=dfs(i);
	}
	return f[x];
}
int main(){
	cin>>n;
	cout<<dfs(n)+1;
}
