#include<bits/stdc++.h>
using namespace std;

struct node{
	int f,s;
};
queue<node> q;
int fa[205],flag[205];
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++) cin>>fa[i];
	node x={a,0};
	q.push(x);
	flag[a]=1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.f==b){
			cout<<t.s;
			return 0;
		}
		if(t.f+fa[t.f]>0&&t.f+fa[t.f]<=n&&flag[t.f+fa[t.f]]==0){
			node tt={t.f+fa[t.f],t.s+1};
			q.push(tt);
			flag[t.f+fa[t.f]]=1;
		}
		if(t.f-fa[t.f]>0&&t.f-fa[t.f]<=n&&flag[t.f-fa[t.f]]==0){
			node tt={t.f-fa[t.f],t.s+1};
			q.push(tt);
			flag[t.f-fa[t.f]]=1;
		}
	}
	cout<<-1;
	return 0;
}

