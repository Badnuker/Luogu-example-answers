#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y;
};
char c[1000][1000];
int flag[1000][1000],a[100000000];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>c[j][i];
		}
	}
	int f=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[j][i]=='1'&&flag[j][i]==0){
				queue<node> q;
				node s;
				s.x=j;s.y=i;
				flag[j][i]=f;
				q.push(s);
				while(!q.empty()){
					node t=q.front();
					q.pop();
					if(t.y-1>=0&&c[t.x][t.y-1]!=c[t.x][t.y]&&flag[t.x][t.y-1]==0){
						flag[t.x][t.y-1]=f;
						node tt;
						tt.x=t.x;
						tt.y=t.y-1;
						q.push(tt);
						a[f]++;
					}//up
					if(t.y+1<n&&c[t.x][t.y+1]!=c[t.x][t.y]&&flag[t.x][t.y+1]==0){
						flag[t.x][t.y+1]=f;
						node tt;
						tt.x=t.x;
						tt.y=t.y+1;
						q.push(tt);
						a[f]++;
					}//down
					if(t.x-1>=0&&c[t.x-1][t.y]!=c[t.x][t.y]&&flag[t.x-1][t.y]==0){
						flag[t.x-1][t.y]=f;
						node tt;
						tt.x=t.x-1;
						tt.y=t.y;
						q.push(tt);
						a[f]++;
					}//left
					if(t.x+1<n&&c[t.x+1][t.y]!=c[t.x][t.y]&&flag[t.x+1][t.y]==0){
						flag[t.x+1][t.y]=f;
						node tt;
						tt.x=t.x+1;
						tt.y=t.y;
						q.push(tt);
						a[f]++;
					}//right
				}
				f++;
			}
		}
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>y>>x;
		cout<<a[flag[x-1][y-1]]+1<<endl;
	}
	return 0;
}

