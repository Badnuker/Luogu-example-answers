#include<bits/stdc++.h>
using namespace std;

int maxi,n;
string s,maxs;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s.size()>maxs.size()){
			maxs=s;
			maxi=i;
		}
		else if(s.size()==maxs.size()){
			for(int j=0;j<s.size();j++){
				if(s[j]-'0'>maxs[j]-'0'){
					maxs=s;
					maxi=i;
					break;
				}else if(s[j]-'0'<maxs[j]-'0') break;
			}
		}
	}
	cout<<maxi<<endl<<maxs;
	return 0;
}
