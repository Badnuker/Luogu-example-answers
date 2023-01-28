#include<bits/stdc++.h>
using namespace std;

int m,n,k;
int main(){
	cin>>n>>k;
	m=n;
	while(n>=k){
		m+=n/k;
		n=n%k+n/k;	
	}
	cout<<m;
	return 0;
}
