#include<bits/stdc++.h>
using namespace std;

int a[30005],ans;
int main(){
	int w,n;
	cin>>w>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int l=1,r=n;
	while(l<=r){
		if(a[l]+a[r]<=w){
			ans++;
			l++;
			r--;
		}else{
			ans++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
