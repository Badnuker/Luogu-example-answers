#include<bits/stdc++.h>
using namespace std;

struct farmer{
	int p,a;
}a[5005];

bool cmp(farmer a,farmer b){
	return a.p<b.p;
}

int ans;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>a[i].p>>a[i].a;
	sort(a+1,a+1+m,cmp);
	for(int i=1;i<=m;i++){
		if(a[i].a>=n){
			ans+=n*a[i].p;
			break;
		}else{
			n-=a[i].a;
			ans+=a[i].a*a[i].p;
		}
	}
	cout<<ans;
	return 0;
}

