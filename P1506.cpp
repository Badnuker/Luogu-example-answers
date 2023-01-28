#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y;
}; 
char c[505][505];
int flag[505][505],sum;
queue<node> q;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c[j][i];
		}
	}
	node x;
	x.x=0;
	x.y=0;
	flag[0][0]=1;
	q.push(x);
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.y-1>=0&&c[t.x][t.y-1]!='*'&&flag[t.x][t.y-1]==0){
			flag[t.x][t.y-1]=1;
			node tt;
			tt.x=t.x;
			tt.y=t.y-1;
			q.push(tt);
		}//up
		if(t.y+1<=n+1&&c[t.x][t.y+1]!='*'&&flag[t.x][t.y+1]==0){
			flag[t.x][t.y+1]=1;
			node tt;
			tt.x=t.x;
			tt.y=t.y+1;
			q.push(tt);
		}//down
		if(t.x-1>=0&&c[t.x-1][t.y]!='*'&&flag[t.x-1][t.y]==0){
			flag[t.x-1][t.y]=1;
			node tt;
			tt.x=t.x-1;
			tt.y=t.y;
			q.push(tt);
		}//left
		if(t.x+1<=m+1&&c[t.x+1][t.y]!='*'&&flag[t.x+1][t.y]==0){
			flag[t.x+1][t.y]=1;
			node tt;
			tt.x=t.x+1;
			tt.y=t.y;
			q.push(tt);
		}//right
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(c[j][i]=='*') flag[j][i]=1;
			if(flag[j][i]==0) sum++;
		}
	}
	cout<<sum;
	return 0;
}

