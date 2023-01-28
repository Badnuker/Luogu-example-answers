#include<bits/stdc++.h>
using namespace std;

int m,n;
int a[100][10];
int flag[1<<11];
struct node{
	int b,s;
};
queue<node> q;

int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	q.push(node{(1<<n)-1,0});
	flag[(1<<n)-1]=1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(!t.b){
			cout<<t.s;
			return 0;
		}
		for(int i=1;i<=m;i++){
			int nb=t.b;
			for(int j=0;j<n;j++){
				if(a[i][j]==1&&(nb&(1<<j))) nb^=(1<<j);
           	 	else if(a[i][j]==-1&&!(nb&(1<<j))) nb|=(1<<j);
			}
			if(!flag[nb]){
				q.push(node{nb,t.s+1});
				flag[nb]=1;
			}
		}
		
	}
	cout<<-1;
	return 0;
}

