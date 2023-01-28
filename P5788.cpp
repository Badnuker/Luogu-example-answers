#include<bits/stdc++.h>
#define N 3000005
using namespace std;

int a[N],sta[N],ans[N];
int top;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		while(top&&a[i]>=a[sta[top]]){
			top--;
		}
		ans[i]=sta[top];
		sta[top++]=i;
	}
	for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
	return 0;
}

