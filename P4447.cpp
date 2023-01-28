#include<bits/stdc++.h>
#define N 100005
using namespace std;

int a[N],n;
int cnt, minn=INT_MAX;
int lst[N],len[N];
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		int find=0;
		int res=0,maxn=INT_MAX;
		for (int j=1;j<=cnt;j++)
		if(lst[j]==a[i]-1&& len[j]<maxn){
	     	maxn=len[j];
		 	res=j;
		 	find=1;
		}
		if(!find){
		 	lst[++cnt]=a[i];
		 	len[cnt]=1;
		}else{
			lst[res]=a[i];
		 	len[res]++;
		}
	}
	for(int i=1;i<=cnt;i++) minn=min(minn,len[i]);
	cout<<minn<<endl;
	return 0;
}
