#include<bits/stdc++.h>
using namespace std;

string s[25];
char c;
int n,len[25][25],num[25],ans;
vector<int> aa[25];

void dfs(int x,int sum){
	ans=max(ans,sum);
	for(int i=0;i<aa[x].size();i++){
		int j=aa[x][i];
		int llen=len[x][j];
		if(num[j]<2){
			num[j]++;
			dfs(j,sum+s[j].size()-llen);
			num[j]--;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	cin>>c;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
		string a=s[i],b=s[j];
		for(int k=a.size()-1;k>=1;k--){
			int L=a.size()-k;
			string ss=a.substr(k,L);
			string tt=b.substr(0,L);
			if(ss==tt){
				len[i][j]=L;
				aa[i].push_back(j);
				break;
			}
		}
		for(int k=b.size()-1;k>=1;k--){
			int L=b.size()-k;
			string ss=b.substr(k,L);
			string tt=a.substr(0,L);
			if(ss==tt){
				len[j][i]=L;
				aa[j].push_back(i);
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(s[i][0]==c){
			num[i]++;
			dfs(i,s[i].size());
			num[i]--;
		}
	}
	cout<<ans;
	return 0;
}
