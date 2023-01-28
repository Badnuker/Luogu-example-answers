#include<bits/stdc++.h>
using namespace std;

int a[200005];
int n,t,max1,max2=-1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	n=unique(a+1,a+n+1)-a-1;
	a[0]=0;
	if(n<=1) cout<<"-1";
	else cout<<max(a[n-2],a[n]%a[n-1]);
	return 0;
}
