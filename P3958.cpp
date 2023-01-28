#include <bits/stdc++.h>
using namespace std;

struct node{
	int x,y,z;
}hole[1005];

int T,n,h,r,ok;
bool flag[1005];

void dfs(int x,int y,int z){
	if(ok) return;
	if(z+r>=h){
		ok=1;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!flag[i]&&!ok){
			double dis=sqrt(pow((x-hole[i].x),2)+pow((y-hole[i].y),2)+pow((z-hole[i].z),2));
			if(dis<=2*r){
				flag[i]=1;
				dfs(hole[i].x,hole[i].y,hole[i].z);
			}
		}
	}
	
}
int main(){
    cin>>T;
    while(T--){
    	cin>>n>>h>>r;
    	memset(hole,0,sizeof(hole));
    	memset(flag,0,sizeof(flag));
    	for(int i=1;i<=n;i++){
    		cin>>hole[i].x>>hole[i].y>>hole[i].z;
		}
    	ok=0;
		for(int i=1;i<=n;i++){
    		if(!ok&&hole[i].z<=r){
    			if(hole[i].z+r>=h){
    				cout<<"Yes"<<endl;
    				ok=1;
    				continue;
				}
    			flag[i]=1;
    			dfs(hole[i].x,hole[i].y,hole[i].z);
    			flag[i]=0;
    			if(ok){
    				cout<<"Yes"<<endl;
    				break;
				}
			}
		}
		if(!ok)cout<<"No"<<endl;
	}
    return 0;
}
