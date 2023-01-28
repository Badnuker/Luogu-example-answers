#include<bits/stdc++.h>
using namespace std;

struct stu{
	int y,m,d,n;
	string s;
} a[105];

bool cmp(stu a,stu b){
	if(a.y!=b.y){
		return a.y<b.y;
	}else if(a.m!=b.m){
		return a.m<b.m;
	}else if(a.d!=b.d){
		return a.d<b.d;
	}else return a.n>b.n;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].s>>a[i].y>>a[i].m>>a[i].d;
		a[i].n=i;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].s<<endl;
	}
	return 0;
} 

