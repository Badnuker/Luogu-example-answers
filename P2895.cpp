#include<bits/stdc++.h>
using namespace std;

int d[2][5]={{0,1,-1,0,0},{0,0,0,1,-1}};
struct node{
	int x,y,t;
};
int m,s[305][305],flag[305][305];
queue<node> q;

int main(){
	cin>>m;
	for(int i=1;i<=304;i++)	
	for(int j=1;j<=304;j++) 
		s[i][j]=1e6;
	for(int i=1;i<=m;i++){
		int x,y,t;
		cin>>x>>y>>t;
		s[x+1][y+1]=min(s[x+1][y+1],t);
		s[x][y+1]=min(s[x][y+1],t);
		s[x+1][y]=min(s[x+1][y],t);
		s[x+2][y+1]=min(s[x+2][y+1],t);
		s[x+1][y+2]=min(s[x+1][y+2],t);
	}
	q.push((node){1,1,0});
	//memset(flag,0,sizeof(flag));
	flag[1][1]=1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(s[t.x][t.y]==1e6){
			cout<<t.t;
			return 0;
		}
		for(int i=1;i<=4;i++){
			int tx=t.x+d[0][i],ty=t.y+d[1][i];
			if(tx<1||ty<1)continue;
			if(s[tx][ty]>t.t+1&&flag[tx][ty]==0){
				flag[tx][ty]=1;
				q.push((node){tx,ty,t.t+1});
			}
		}
	}
	cout<<-1;
	return 0;
}
