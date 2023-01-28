#include<bits/stdc++.h>
using namespace std;

int n,flag[105],ans=INT_MAX;

struct food{
	int s,b;
}a[105];

void dfs(int s,int b){
	ans=min(abs(s-b),ans);//now
	for(int i=1;i<=n;i++){
		if(flag[i]==0){
			flag[i]=1;
			dfs(s*a[i].s,b+a[i].b);
			flag[i]=0;
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].s>>a[i].b;
	for(int i=1;i<=n;i++){
		flag[i]=1;
		dfs(a[i].s,a[i].b);
		memset(flag,0,sizeof(flag));
	}
	cout<<ans;
	return 0;
}
