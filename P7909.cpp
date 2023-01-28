#include<bits/stdc++.h>
using namespace std;

int n,l,r,m;
int main(){
	cin>>n>>l>>r;
	if(r<2*n){
		cout<<r-n;
		return 0;
	}
	for(int k=l;k<=r;k++) m=max(m,k%n);
	cout<<m;
	return 0;
}
