#include<bits/stdc++.h>
using namespace std;

int flag[10],ans[10];
int n;
void dfs(int x){
	if(x==n){
		for(int i=1;i<=n;i++)
			cout<<setw(5)<<ans[i];
		
		cout<<endl;
	}else
		for(int i=1;i<=n;i++)
			if(!flag[i]){
				flag[i]=1;
				ans[x+1]=i;
				dfs(x+1);
				flag[i]=0;
			}
		
	
}
int main(){
	cin>>n;
	dfs(0);
	next_permutation()
	return 0;
}

