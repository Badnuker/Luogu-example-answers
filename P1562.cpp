#include<bits/stdc++.h>
using namespace std;

int f[1<<20][15];
int a[15];
int n,ans;
int all;

void dfs(int num,int x,int y,int z){
	if(x==all){
		ans++;
		return;
	}
	int xx=all&~(x|y|z|a[num]);
	while(xx){
		int t=xx&-xx;
		xx-=t;
		dfs(num+1,x+t,(y+t)<<1,(z+t)>>1);
	}
}

int main(){
	cin>>n;
	all=(1<<n)-1;
	char c;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
		cin>>c;
		if(c=='.') a[i]+=1<<(j-1);
	}
	dfs(1,0,0,0);
	cout<<ans;
	return 0;
}

