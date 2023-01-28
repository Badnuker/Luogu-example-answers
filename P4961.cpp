#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,0,1,-1,-1,1,1,-1};
int a[1005][1005],c[1005][1005];
int flag[1005][1005];
int n,m,sum;

struct node{
	int x,y;
};

void get(){
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(a[i][j]) c[i][j]=1;
		else{
			for(int k=1;k<=8;k++){
				if(i+dx[k]>=1&&i+dx[k]<=m&&j+dy[k]>=1&&j+dy[k]<=n&&a[i+dx[k]][j+dy[k]]){
					c[i][j]=2;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(!c[i][j]){
			for(int k=1;k<=8;k++){
				if(i+dx[k]>=1&&i+dx[k]<=m&&j+dy[k]>=1&&j+dy[k]<=n&&c[i+dx[k]][j+dy[k]]==2){
					c[i+dx[k]][j+dy[k]]=3;
				}
			}
		}
	}
}

void find_empty(){
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(!c[i][j]&&!flag[i][j]){
			flag[i][j]=1;
			queue<node> q;
			q.push(node{i,j});
			while(!q.empty()){
				node t=q.front();
				q.pop();
				for(int k=1;k<=8;k++){
					if(t.x+dx[k]>=1&&t.x+dx[k]<=m&&t.y+dy[k]>=1&&t.y+dy[k]<=n&&!flag[t.x+dx[k]][t.y+dy[k]]&&!c[t.x+dx[k]][t.y+dy[k]]){
							flag[t.x+dx[k]][t.y+dy[k]]=1;
							q.push(node{t.x+dx[k],t.y+dy[k]});
					}
				}
			}
			sum++;
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		cin>>a[i][j];
	}
	get();
//	cout<<endl;
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++){
//			cout<<c[i][j]<<' ';
//		}
//		cout<<endl;
//	}
	find_empty();
//	cout<<endl;
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++){
//			cout<<c[i][j]<<' ';
//		}
//		cout<<endl;
//	}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(c[i][j]==2) sum++;
	}
	cout<<sum;
}
