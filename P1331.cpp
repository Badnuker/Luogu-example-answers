#include<bits/stdc++.h>
using namespace std;

char g[1005][1005];
int n,m;
bool check(int x,int y)
{
	int c=0;
	if(g[x][y]=='#') c++;
	if(g[x+1][y]=='#') c++;
	if(g[x][y+1]=='#') c++;
	if(g[x+1][y+1]=='#') c++;
	return c==3; 
}
int ans;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)	
			cin>>g[i][j];
	for(int i=1;i<n;i++)
		for(int j=1;j<m;j++)
			if(check(i,j))
			{
				cout<<"Bad placement.";
				return 0;
			}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(g[i][j]=='#' && g[i-1][j]!='#' && g[i][j-1]!='#') ans++;
	cout<<"There are "<<ans<<" ships.";
	return 0;
}
