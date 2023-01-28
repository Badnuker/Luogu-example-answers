#include<bits/stdc++.h>
using namespace std;

int main(){
//	freopen("t.txt","w",stdout);
	int p1,p2,p3;
	string s;
	cin>>p1>>p2>>p3>>s;
	int m=s.size();
	for(int i=0;i<m;i++){
		m=s.size();
		if(s[i]=='-'){
			if(s[i+1]>s[i-1]){
				if(s[i+1]>='a'&&s[i+1]<='z'&&s[i-1]>='a'&&s[i-1]<='z'){
					if(p1==1&&p3==1){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i-1]+j/p2+1);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if(p1==1&&p3==2){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i+1]-j/p2-1);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if(p1==2&&p3==1){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i-1]+j/p2+1-32);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if(p1==2&&p3==2){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i+1]-j/p2-1-32);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if(p1==3){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+='*';
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}
				}else if(isdigit(s[i-1])&&isdigit(s[i+1])){
					if((p1==1||p1==2)&&p3==1){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i-1]+j/p2+1);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if((p1==1||p1==2)&&p3==2){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+=char(s[i+1]-j/p2-1);
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}else if(p1==3){
						string t;
						int n=(s[i+1]-s[i-1]-1)*p2;
						for(int j=0;j<n;j++){
							t+='*';
						}
						s=s.substr(0,i)+t+s.substr(i+1,m-i-1);
					}
				}
			}
		}
	}
	cout<<s;
	return 0;
}
