#include<bits/stdc++.h>
using namespace std;

int n,b,s,t;
int a[20005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	cin>>n>>b;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		s+=a[i];
		t++;
		if(s>b||s==b){
			cout<<t;
			return 0;
		}
	}
}
