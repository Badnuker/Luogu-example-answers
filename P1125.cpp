#include<bits/stdc++.h>
using namespace std;

int a[30],b[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int maxa,mina=105;
string s;
int main(){
	cin>>s;
	int m=s.size();
	for(int i=0;i<m;i++){
		a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(a[i]>maxa){
			maxa=a[i];
		}
		if(a[i]<mina&&a[i]!=0){
			mina=a[i];
		}
	}
	for(int i=0;i<25;i++){
		if(maxa-mina==b[i]){
			cout<<"Lucky Word"<<endl<<b[i];
			return 0;
		}
	}
	cout<<"No Answer"<<endl<<0;
	return 0;
}
