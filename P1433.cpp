#include<bits/stdc++.h>
using namespace std;

double x[20],y[20];
double f[1<<16][20];
double dis(int a,int b){
	return sqrt((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
}

int main(){
	int n;
	cin>>n;
	int m=(1<<n)-1;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
	memset(f,127,sizeof(f));
	for(int i=0;i<n;i++)
		f[1<<i][i]=dis(0,i+1);
	for(int i=3;i<=m;i++)
		for(int j=0;j<n;j++)
			if(i&(1<<j))
				for(int k=0;k<n;k++)
					if(j!=k&&(i&(1<<k)))
						f[i][j]=min(f[i][j],f[i^(1<<j)][k]+dis(k+1,j+1));
	double ans=1<<30;
	for(int i=0;i<n;i++) ans=min(ans,f[m][i]);		
	printf("%.2lf",ans);
	return 0;
}
