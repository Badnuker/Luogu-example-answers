#include<bits/stdc++.h>
using namespace std;

int a[10][10],ans=-1,row[10][10],col[10][10],small[10][10];
int score[10][10]=
{
{0,0,0,0,0,0,0,0,0,0},
{0,6,6,6,6,6,6,6,6,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,9,10,9,8,7,6},
{0,6,7,8,9,9,9,8,7,6},
{0,6,7,8,8,8,8,8,7,6},
{0,6,7,7,7,7,7,7,7,6},
{0,6,6,6,6,6,6,6,6,6}
};
void ct(){
	int t=0;
	for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++)
			t+=a[i][j]*score[i][j];
	ans=max(ans,t);
}
void dfs(){
	int minv=10,x,y;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(!a[i][j]){
				int t=(i-1)/3*3+(j-1)/3+1;
				int sum=0;
				for(int k=1;k<=9;k++){
					if(!row[i][k]&&!col[j][k]&&!small[t][k])
						++sum;
				}
				if(!sum) return;
				if(minv>sum){
					minv=sum;
					x=i;
					y=j;
				}
			}
		}
	}
	if(!minv) return;
	if(minv==10){
		ct();
		return;
	}
	for(int k=1;k<=9;k++){
		int t=(x-1)/3*3+(y-1)/3+1;
		if(!row[x][k]&&!col[y][k]&&!small[t][k]){
			a[x][y]=k;
			row[x][k]=1;
			col[y][k]=1;
			small[t][k]=1;
			dfs();
			a[x][y]=0;
			row[x][k]=0;
			col[y][k]=0;
			small[t][k]=0;
		}
		
	}
}
int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cin>>a[i][j];
			if(a[i][j]){
				row[i][a[i][j]]=1;
				col[j][a[i][j]]=1;
				small[(i-1)/3*3+(j-1)/3+1][a[i][j]]=1;
			}
		}
	}
	
	dfs();
	
	cout<<ans;
	return 0;
}
