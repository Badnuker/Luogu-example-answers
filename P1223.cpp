#include<bits/stdc++.h>
using namespace std;

struct p{
	long long t,n;
};
p a[1005];

bool cmp(p a,p b){
	if(a.t!=b.t) return a.t<b.t;
	else return 0;
}

long long t;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t;
		a[i].n=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<a[i].n<<' ';
	}
	cout<<endl;
	for(int j=n-1;j>=1;j--){
   		int i=n-j;
   		t+=a[i].t*j;            
  	}
 	printf("%.2lf",t*1.0/n);
	return 0;
}
