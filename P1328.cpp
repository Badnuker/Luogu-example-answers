#include<bits/stdc++.h>
using namespace std;

int n,x,y,a[205],b[205],suma,sumb;
int aa[5][5]={{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
int main(){
	cin>>n>>x>>y;
	for(int i=0;i<x;i++) cin>>a[i];
	for(int i=0;i<y;i++) cin>>b[i];	
	for(int i=0;i<n;i++){
		suma+=aa[a[i%x]][b[i%y]];
		sumb+=aa[b[i%y]][a[i%x]];
	}
	cout<<suma<<' '<<sumb;
	return 0;
}
