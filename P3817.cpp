#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[100005],ans;
signed main(){
	int n,x;
	cin>>n>>x;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(a[1]>x){
		ans+=a[1]-x;
		a[1]=x;
	}
	for(int i=1;i<=n-1;i++){
		if(a[i]+a[i+1]>x){
			ans+=a[i]+a[i+1]-x;
			a[i+1]=x-a[i];
		}
	}
	cout<<ans;
	return 0;
}

