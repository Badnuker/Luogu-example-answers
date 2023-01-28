#include<bits/stdc++.h>
#define N 1025
using namespace std;

int a[N][N];
int n;

void aaa(int x,int y,int n) {
	if(n==0) a[x][y]=1;
	else {
		aaa(x+(1<<n-1),y,n-1);
		aaa(x,y+(1<<n-1),n-1);
		aaa(x+(1<<n-1),y+(1<<n-1),n-1);
	}
}

int main() {
	cin>>n;
	int nn=1<<n;
	aaa(1,1,n);
	for (int i=1;i<=nn;i++) {
		for (int j=1;j<=nn;j++) cout<<a[i][j]<<' ';
		cout<<endl;
	}
	return 0;
}
