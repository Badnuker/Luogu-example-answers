#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[10005];
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	int t=n;
	for(int i=1;i<n;i++){
		for(int j=0;j<t-1;j++){
			if(a[j]>a[j+1]){
				s++;
				swap(a[j],a[j+1]);
			}
		}
		t--;
	}
	cout<<s;
}
