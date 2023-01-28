#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,sum,ans,a[1000005],c[1000005];
int r(){
	int x;
	cin>>x;
	return x;
}
signed main(){
	n=r();
	for(int i=1;i<=n;i++){
		a[i]=r();
		sum+=a[i];
	}
	sum/=n;
	for(int i=1;i<=n;i++) c[i]=c[i-1]+sum-a[i-1];
	sort(c+1,c+1+n);
	int mid=c[(n+1)/2];
	for(int i=1;i<=n;i++) ans+=abs(mid-c[i]);
	cout<<ans;
	return 0;
}
