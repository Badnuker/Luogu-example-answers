#include<bits/stdc++.h>
using namespace std;

int v,minv[30],g,numg[20][30],used[30],minn=30,ans[30];

bool ck(int x){
	for(int i=1;i<=v;i++){
		int sum=0;
		for(int j=1;j<=x;j++){
			sum+=numg[used[j]][i];
		}
		if(sum<minv[i]) return false;
	}
	return true;
}

void dfs(int m,int n){
	if(m>g){
		if(ck(n)){
			if(n<minn){
				minn=n;
				for(int i=1;i<=minn;i++) ans[i]=used[i];
			}
		}
		return;
	}
	
	used[n+1]=m;
	dfs(m+1,n+1);
	used[n+1]=0;
	dfs(m+1,n);
}

int main(){
	cin>>v;
	for(int i=1;i<=v;i++) cin>>minv[i];
	cin>>g;
	for(int i=1;i<=g;i++)
	for(int j=1;j<=v;j++){
		cin>>numg[i][j];
	}
	dfs(1,0);
	cout<<minn<<' ';
	for(int i=1;i<=minn;i++) cout<<ans[i]<<' ';
} 
