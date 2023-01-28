#include<bits/stdc++.h>
using namespace std;

int mapa[15][15];
int f[15],a[15];
int flag,n,sum;

void dfs(int x,int t){
    if(t>sum||flag) return;
    if(x==n+1){
    	if(sum==t){
    		for(int i=1;i<=n;i++)
    			cout<<a[i]<<' ';
    		flag=1;
    		return;
		}
	}
	for(int i=1;i<=n;i++){
		if(!f[i]){
			a[x]=i;
			f[i]=1;
			dfs(x+1,t+i*mapa[n][x]);
			f[i]=0;
		}
	}
}

int main(){
    cin>>n>>sum;
    mapa[1][1]=1;
    for(int i=2;i<=n;i++)
    	for(int j=1;j<=i;j++)
    		mapa[i][j]=mapa[i-1][j-1]+mapa[i-1][j];
	dfs(1,0);
    return 0;
}

/*
0
0 1
0 1 1
0 1 2 1
0 1 3 3 1
*/

