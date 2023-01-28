#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y;
};
char c[105][105];
int flag[105][105],sum;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c[j][i];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(c[j][i]!='.'&&flag[j][i]==0){
				node x;
				x.x=j;
				x.y=i;
				flag[j][i]=1;
				queue<node> q;
				q.push(x);
				while(!q.empty()){
					node t=q.front();
					q.pop();
					if(t.y-1>=0&&c[t.x][t.y-1]!='.'&&flag[t.x][t.y-1]==0){
						flag[t.x][t.y-1]=1;
						node tt;
						tt.x=t.x;
						tt.y=t.y-1;
						q.push(tt);
					}//up
					if(t.y+1<n&&c[t.x][t.y+1]!='.'&&flag[t.x][t.y+1]==0){
						flag[t.x][t.y+1]=1;
						node tt;
						tt.x=t.x;
						tt.y=t.y+1;
						q.push(tt);
					}//down
					if(t.x-1>=0&&c[t.x-1][t.y]!='.'&&flag[t.x-1][t.y]==0){
						flag[t.x-1][t.y]=1;
						node tt;
						tt.x=t.x-1;
						tt.y=t.y;
						q.push(tt);
					}//left
					if(t.x+1<m&&c[t.x+1][t.y]!='.'&&flag[t.x+1][t.y]==0){
						flag[t.x+1][t.y]=1;
						node tt;
						tt.x=t.x+1;
						tt.y=t.y;
						q.push(tt);
					}//right
					if(t.x+1<m&&t.y+1<n&&c[t.x+1][t.y+1]!='.'&&flag[t.x+1][t.y+1]==0){
						flag[t.x+1][t.y+1]=1;
						node tt;
						tt.x=t.x+1;
						tt.y=t.y+1;
						q.push(tt);
					}
					if(t.x+1<m&&t.y-1>=0&&c[t.x+1][t.y-1]!='.'&&flag[t.x+1][t.y-1]==0){
						flag[t.x+1][t.y-1]=1;
						node tt;
						tt.x=t.x+1;
						tt.y=t.y-1;
						q.push(tt);
					}
					if(t.x-1>=0&&t.y+1<n&&c[t.x-1][t.y+1]!='.'&&flag[t.x-1][t.y+1]==0){
						flag[t.x-1][t.y+1]=1;
						node tt;
						tt.x=t.x-1;
						tt.y=t.y+1;
						q.push(tt);
					}
					if(t.x-1>=0&&t.y-1>=0&&c[t.x-1][t.y-1]!='.'&&flag[t.x-1][t.y-1]==0){
						flag[t.x-1][t.y-1]=1;
						node tt;
						tt.x=t.x-1;
						tt.y=t.y-1;
						q.push(tt);
					}
				}
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
