#include<bits/stdc++.h>
using namespace std;

int n,a[100005],m,sum;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j>=1;j++){		
			if(a[i]+a[i+j]<=m) a[i]+=a[i+j];				
			else{
				sum++;
				i+=j-1;
				break;
			}
		}
	}
	cout<<sum;
	return 0;
}
