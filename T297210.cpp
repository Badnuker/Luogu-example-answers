#include<bits/stdc++.h>
using namespace std;

string a,b;
int k;
long long s; 
int main(){
	cin>>a>>b>>k;
	int m=a.size(),n;
	for(int i=0;i<m;i++){
		if(a[i]!=b[i]){
			n=m-i;
			break;
		}
	}
	if(!n){
		cout<<0;
		return 0;
	}
	s+=n;
	for(int i=m-n+1;i<m;i++){
		if(b[i]=='0'){
			s++;
		}else{
			s+=2;
		}
	}
	cout<<s*k;
	return 0;
}

