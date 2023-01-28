#include<bits/stdc++.h>
using namespace std;

struct stu{
	int n,c,m,e,s;	
};
stu a[305];

bool cmp(stu a,stu b){
	if(a.s==b.s){
		if(a.c==b.c) return a.n<b.n;
		else return a.c>b.c;
	}else return a.s>b.s;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].n=i+1;
		cin>>a[i].c>>a[i].m>>a[i].e;
		a[i].s=a[i].c+a[i].m+a[i].e;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<5;i++){
		cout<<a[i].n<<' '<<a[i].s<<endl;
	}
	return 0;
}
