#include<bits/stdc++.h>
using namespace std;

struct node{
	int x,y,s;
};
int flag[405][405];
int x[2],y[2];
int fx[12]={-2,-2,-1,-1,1,1,2,2,2,2,-2,-2};
int fy[12]={1,-1,2,-2,2,-2,1,-1,2,-2,2,-2};
int main(){
	cin>>x[0]>>y[0]>>x[1]>>y[1];
	node st;
	st.x=1;
	st.y=1;
	st.s=0;
	for(int n=0;n<2;n++){
		queue<node> q;
		memset(flag,0,sizeof(flag));
		q.push(st);
		flag[1][1]=1;
		while(!q.empty()){
			node t;
			t=q.front();
			q.pop();
			if(t.x==x[n]&&t.y==y[n]){
				cout<<t.s<<endl;
				break;
			}
			for(int i=0;i<12;i++){
				if(t.x+fx[i]>0&&t.x+fx[i]<=x[n]+2&&t.y+fy[i]>0&&t.y+fy[i]<=y[n]+2&&flag[t.x+fx[i]][t.y+fy[i]]==0){
					node tt;
					tt.x=t.x+fx[i];
					tt.y=t.y+fy[i];
					tt.s=t.s+1;
					q.push(tt);
					flag[t.x+fx[i]][t.y+fy[i]]=1;
				}
			}
		}
	}
	return 0;
}

