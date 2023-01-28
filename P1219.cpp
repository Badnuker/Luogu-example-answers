#include<bits/stdc++.h>
using namespace std;

int fa[15],fb[15],fc[40],fd[40],a[15];
int flag,n,sum;

void dfs(int x){
    if(x==n+1){
    	sum++;
    	if(sum<=3){
			for(int i=1;i<=n;i++)
    			cout<<a[i]<<' ';
    		cout<<endl;
		}
	}else{
		for(int i=1;i<=n;i++){
			if(fa[x]==0&&fb[i]==0&&fc[x+i]==0&&fd[x-i+n]==0){
				a[x]=i;
				fa[x]=1;
				fb[i]=1;
				fc[x+i]=1;
				fd[x-i+n]=1;
				dfs(x+1);
				fa[x]=0;
				fb[i]=0;
				fc[x+i]=0;
				fd[x-i+n]=0;
			}
		}
	}
}

int main(){
    cin>>n;
	dfs(1);
	cout<<sum;
    return 0;
}


