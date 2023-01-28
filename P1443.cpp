#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y;
};
queue<node> q;
int flag[405][405],step[405][405],s;
int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	node st;
	st.x=x-1;
	st.y=y-1;
	flag[x-1][y-1]=1;
	q.push(st);
	int fx[8]={-2,-2,-1,-1,1,1,2,2};
	int fy[8]={1,-1,2,-2,2,-2,1,-1};
	while(!q.empty()){
		node t;
		t=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			if(t.x+fx[i]>=0&&t.x+fx[i]<n&&t.y+fy[i]>=0&&t.y+fy[i]<m&&flag[t.x+fx[i]][t.y+fy[i]]==0){
				node tt;
				tt.x=t.x+fx[i];
				tt.y=t.y+fy[i];
				q.push(tt);
				flag[t.x+fx[i]][t.y+fy[i]]=1;
				step[t.x+fx[i]][t.y+fy[i]]=step[t.x][t.y]+1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(flag[i][j]==0) cout<<-1<<"   ";
			else cout<<step[i][j]<<"    ";
		}
		cout<<endl;
	}
	return 0;
}

