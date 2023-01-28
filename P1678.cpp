#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[100005],b[100005],ans;
signed main(){
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++) cin>>a[i];//schools
	for(int i=1;i<=n;i++) cin>>b[i];//students
	sort(a+1,a+1+m);
	for(int i=1;i<=n;i++){
		int l=1,r=m,ff=0;
		while(l+1<r){
			int mid=(l+r)/2;
			if(b[i]-a[mid]>0){
				l=mid;
			}else if(b[i]-a[mid]<0){
				r=mid;
			}else{
				ff=1;
				break;
			}
		}
		if(!ff) ans+=min(abs(b[i]-a[l]),abs(b[i]-a[r]));
	}
	cout<<ans;
	return 0;
}
