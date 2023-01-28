#include<bits/stdc++.h>
using namespace std;

struct node{
	string s;
	int t;
};

string A,B,a,b,ca[100000],cb[100000];
map<string,int> flag;
queue<node> q;
int main(){
	cin>>A>>B;
	int i=0;
	while(cin>>a>>b){
		ca[++i]=a;
		cb[i]=b;
	}
	int sum=i;
	node x={A,0};
	q.push(x);
	flag[A]=1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.s==B){
			cout<<t.t;
			return 0;
		}
		if(t.t>10) continue;
		for(int i=1;i<=sum;i++){
			int pre=0;
			while(t.s.find(ca[i],pre)!=-1){
				node tt;
				string ts=t.s;
				ts.replace(t.s.find(ca[i],pre),ca[i].length(),cb[i]);
				if(!flag[ts]){
					tt.s=ts;
					tt.t=t.t+1;
					q.push(tt);
					flag[ts]=1;
				}
				pre=t.s.find(ca[i],pre)+ca[i].length();
			}
		}
	}
	cout<<"NO ANSWER!";
	return 0;
}
