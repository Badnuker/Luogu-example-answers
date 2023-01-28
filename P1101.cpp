#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,-1,0,0,1,-1,1,-1};
int dy[]={0,0,0,1,-1,1,-1,-1,1};
char c[105][105],ans[105][105];
int n;
char ch[]={'y','i','z','h','o','n','g'};
//          0   1   2   3   4   5   6

void ck(int x,int y){
	for(int i=1;i<=8;i++){//direction
		//cout<<endl<<"direction:"<<dx[i]<<' '<<dy[i]<<endl;
		int flag=0;
		int tx=x+6*dx[i],ty=y+6*dy[i];//end
		//cout<<"tx:"<<tx<<' '<<"ty:"<<ty<<endl;
		if(tx<1||tx>n||ty<1||ty>n) flag=1;//limit
		else{
			//cout<<"ok"<<endl;
			for(int j=0;j<=6;j++){//step
				//cout<<"step:"<<j+1<<endl;
				//cout<<"x="<<x+j*dx[i]<<" y="<<y+j*dy[i]<<endl;
				if(c[x+j*dx[i]][y+j*dy[i]]!=ch[j]){
					flag=1;
					//cout<<"expect:"<<ch[j]<<",find:"<<c[x+j*dx[i]][y+j*dy[i]]<<",stop"<<endl;
					break;
				}
			}
		}
		if(!flag){
			for(int j=0;j<=6;j++){
				ans[x+j*dx[i]][y+j*dy[i]]=c[x+j*dx[i]][y+j*dy[i]];
			}
		}
		/*
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<ans[j][i];
			}
			cout<<endl;
		}
		cout<<endl;
		*/
	}
	/*
	cout<<"end:"<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<ans[j][i];
		}
		cout<<endl;
	}
	*/
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[j][i];
			ans[j][i]='*';
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(c[j][i]=='y'){
				//cout<<endl<<endl<<"x:"<<j<<' '<<"y:"<<i<<endl;
				ck(j,i);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<ans[j][i];
		}
		cout<<endl;
	}
	return 0;
}
