#include<bits/stdc++.h>
using namespace std;

int dx[]= {0,0,0,1,-1,1,1,-1,-1};
int dy[]= {0,1,-1,0,0,1,-1,1,-1};
char a[105][105];

int main() {
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++) {
		cin>>a[i][j];
		if(a[i][j]=='?') a[i][j]='0';
	}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++) {
			if(a[i][j]=='*') {
				for (int k=1;k<=8;k++) {
					int tx=i+dx[k],ty=j+dy[k];
					if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&a[tx][ty]!='*') a[tx][ty]=char(a[tx][ty]+1);
				}
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
