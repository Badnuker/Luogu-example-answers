#include<bits/stdc++.h>
using namespace std;

int a[100005],ans;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1]){
			ans+=a[i]-a[i-1];
		}
	}
	cout<<ans+a[1];
	return 0;
}

