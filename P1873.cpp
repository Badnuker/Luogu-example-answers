#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[1000005];

int check(int mid) {
	int sum=0;
	for (int i=1;i<=n;i++)
	    if(a[i]>mid) sum+=(a[i]-mid);
	return sum>=m;
}

signed main() {
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int L=1,R=a[n];
	while(L<R) {
		int mid=R+L>>1;
		if(check(mid)) L=mid+1;
		else R=mid;
	}
	cout<<L-1<<endl;
	return 0;
}
