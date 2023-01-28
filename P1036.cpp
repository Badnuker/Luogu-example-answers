#include<bits/stdc++.h>
using namespace std;

int a[25],n,kk,ans;

bool isprime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}

void dfs(int k,int sum,int p){
	if(k==kk){
		if(isprime(sum)){ 
			ans++;
			//cout<<sum; 
		} 
	}else
		for(int i=p;i<=n;i++)
			dfs(k+1,sum+a[i],i+1);
}

int main(){
	cin>>n>>kk;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	dfs(0,0,1);
	cout<<ans;
}
