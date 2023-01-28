#include<bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(int a,int b){
	return a>b;
}
int a[305],ans;
signed main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int s=0;
	for(int i=1;i<=n;i++){
		if(i%2){
			sort(a+i,a+n+1,cmp);
			ans+=pow(a[i]-s,2);
			s=a[i];
		}else{
			sort(a+i,a+n+1);
			ans+=pow(a[i]-s,2);
			s=a[i];
		}
	}
	cout<<ans;
	return 0;
}

