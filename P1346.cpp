#include<bits/stdc++.h>
using namespace std;

int a[105][105],cnt[105],f[105];

struct node{
	int x,c;
};
deque<node> q;
int main(){
	int n,A,b;
	cin>>n>>A>>b;
	for(int i=1;i<=n;i++){
		cin>>cnt[i];
		for(int j=1;j<=cnt[i];j++){
			cin>>a[i][j];
		}
	}
	node x={A,0};
	q.push_front(x);
	while(!q.empty()){
		node t=q.front();
		q.pop_front();
		if(f[t.x]) continue;
		else f[t.x]=1;
		if(t.x==b){
			cout<<t.c;
			return 0;
		}
		for(int i=1;i<=cnt[t.x];i++){
			if(i==1){
				node tt={a[t.x][i],t.c};
				q.push_front(tt);
			}
			else{
				node tt={a[t.x][i],t.c+1};
				q.push_back(tt);
			}
			
		}
	}
	cout<<-1;
	return 0;
}
