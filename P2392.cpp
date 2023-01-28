#include<bits/stdc++.h>
using namespace std;

int s1,s2,s3,s4,ans;
int a[60];

int dfs(int n,int m,int l,int r){
	if(n==m+1){
		return max(l,r);
	}else{
		return min(dfs(n+1,m,l+a[n],r),dfs(n+1,m,l,r+a[n]));
	}
}
int main(){
	cin>>s1>>s2>>s3>>s4;
	for(int i=1;i<=s1;i++) cin>>a[i];
	ans+=dfs(1,s1,0,0);
	for(int i=1;i<=s2;i++) cin>>a[i];
	ans+=dfs(1,s2,0,0);
	for(int i=1;i<=s3;i++) cin>>a[i];
	ans+=dfs(1,s3,0,0);
	for(int i=1;i<=s4;i++) cin>>a[i];
	ans+=dfs(1,s4,0,0);
	cout<<ans;
}
