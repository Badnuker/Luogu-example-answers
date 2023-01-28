#include<bits/stdc++.h>
using namespace std;

int n,a[100005],b[100005];
stack<int> s;
int main(){
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int t=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			s.push(a[i]);
			while(s.top()==b[t]){
				s.pop();
				t++;
				if(s.empty()) break;
			}
		}
		if(s.size()){
			cout<<"No"<<endl;	
		}else{
			cout<<"Yes"<<endl;
		}
		while(s.size()) s.pop();
	}
	return 0;
}
