#include<bits/stdc++.h>
using namespace std;

int n,a[105],m,f,sum;
int main(){
	cin>>n;
	while(cin>>a[++m]);
	m--;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=a[i];j++){
			cout<<f;
			sum++;
			if(sum==n){
				sum=0;
				cout<<endl;
			}
		}
		f=1-f;
	}
	return 0;
}
