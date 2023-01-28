#include<bits/stdc++.h>
using namespace std;

int L,n,m;
int a[5000005];
int main(){
	cin>>L>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[n+1]=L;
	int l=1,r=1e9;
	while(l<=r){
		int mid=(l+r)/2;
		int sum=0,t=0;
		for(int i=1;i<=n+1;i++){
			while(a[i]<t+mid&&i<=n+1){
				sum++;
				i++;
			}
			t=a[i];
		}
		if(sum>m) r=mid-1;
		else l=mid+1;
	}
	cout<<r;
	return 0;
}
