#include<bits/stdc++.h>
using namespace std;

struct gold{
	double m,v,p;
};
gold a[105];

bool cmp(gold a,gold b){
	return a.p>b.p;
}

double m,v;
int main(){
	int n,t;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i].m>>a[i].v;
		a[i].p=a[i].v/a[i].m;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		if(m+a[i].m>=t){
			v+=(t-m)*a[i].p;
			break;
		}
		m+=a[i].m;
		v+=a[i].v;
	}
	printf("%.2lf",v);
	return 0;
}
