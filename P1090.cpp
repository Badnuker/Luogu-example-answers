#include<bits/stdc++.h>
using namespace std;

int a[10005],s;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=n;
	sort(a,a+n);
	for(int i=0;i<n-1;i++){
		a[1]+=a[0];
		s+=a[1];
		for(int j=0;j<m;j++){
			a[j]=a[j+1];
		}
		m--;
		for(int j=0;j<m-1;j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
	cout<<s;
	return 0;
}
