#include<bits/stdc++.h>
#define N 1000005
using namespace std;

int a[N],ans[N],sta[N],v[N];
int top;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>v[i];
	for(int i=1;i<=n;i++){
		while(top&&a[i]>=a[sta[top]]){
			top--;
		}
		top++;
		sta[top]=i;
		if(top>1) ans[sta[top-1]]+=v[sta[top]];
	}
	top=0;
	for(int i=n;i>=1;i++){
		while(top&&a[i]>=a[sta[top]]){
			top--;
		}
		top++;
		sta[top]=i;
		if(top>1) ans[sta[top-1]]+=v[sta[top]];
	}
	sort(ans+1,ans+n+1);
	cout<<ans[n];
	return 0;
}

