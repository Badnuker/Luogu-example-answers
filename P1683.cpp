#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y;
};
queue<node> q;
int flag[25][25],sum;
char c[25][25];
int main(){
	int w,h;
	node x;
	cin>>w>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>c[j][i];
			if(c[j][i]=='@'){
				x.x=j;
				x.y=i;
				sum++;
				flag[j][i]=1;
				q.push(x);
			}
		}
	}
	int dx[4]={1,0,-1,0};
	int dy[4]={0,1,0,-1};
	while(!q.empty()){
		node t;
		t=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int nx=t.x+dx[i];
			int ny=t.y+dy[i];
			if(c[nx][ny]=='.'&&nx>=0&&nx<w&&ny>=0&&ny<h&&flag[nx][ny]==0){
				node tt;
				tt.x=nx;
				tt.y=ny;
				sum++;
				flag[nx][ny]=1;
				q.push(tt);
			}
		}
	}
	cout<<sum;
	return 0;
}

