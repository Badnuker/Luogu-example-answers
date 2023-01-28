#include<bits/stdc++.h>
using namespace std;

int n,m,t;
int a[100005],x,y;
string s[100005];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i]>>s[i];
	for(int i=1;i<=m;i++){
		cin>>x>>y;
		if(a[t]==0){
			if(x==0) t=(t+n-y)%n;
			else t=(t+y)%n;
		}else{
			if(x==0) t=(t+y)%n;
			else t=(t+n-y)%n;
		}
	}
	cout<<s[t];
	return 0;
}
