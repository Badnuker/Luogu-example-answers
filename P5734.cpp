#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==1){
			string t;
			cin>>t;
			s+=t;
			cout<<s<<endl;
		}else if(a==2){
			int x,y;
			cin>>x>>y;
			s=s.substr(x,y);
			cout<<s<<endl;
		}else if(a==3){
			int m;
			string t;
			cin>>m>>t;
			s=s.insert(m,t);
			cout<<s<<endl;
		}else if(a==4){
			string t;
			cin>>t;
			if(s.find(t)>=s.size()){
				cout<<"-1"<<endl;
			}else{
				cout<<s.find(t)<<endl;
			}
		}
	}
	return 0;
}
