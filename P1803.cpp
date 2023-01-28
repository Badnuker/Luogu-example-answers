#include<bits/stdc++.h>
using namespace std;

struct t{
	int s,e;
};
t a[1000005];
bool cmp(t a,t b){
	return a.e<b.e;
}

int ti,e,s;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].s>>a[i].e;
	}
	sort(a,a+n,cmp);
	while(ti<n){
		if(a[ti].s>=e){
			s++;
			e=a[ti].e;
		}
		ti++;
	}
	cout<<s;
	return 0;
}
