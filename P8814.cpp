#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin>>k;
	long long n[k],e[k],d[k];
	for(int i=1;i<=k;i++){
		cin>>n[i]>>d[i]>>e[i];
	}
	for(int i=1;i<=k;i++){
		long long sn=ceil(sqrt(n[i]));
		int f=0;
		for(int p=1;p<=sn;p++){
			if(n[i]%p==0){
				long long q=n[i]/p;
				if(e[i]*d[i]==(q-1)*(p-1)+1){
					cout<<p<<' '<<q<<endl;
					f=1;
					break;
				}
			}
		}
		if(!f) cout<<"NO"<<endl;
	}
	return 0;
} 
