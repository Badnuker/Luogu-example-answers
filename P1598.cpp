#include<bits/stdc++.h>
using namespace std;

int f[26],maxn;
string s;
char c[30][400];
int main(){
    for(int i=0;i<4;i++){
        getline(cin,s);
        int n=s.size();
        for(int j=0;j<n;j++){
			if(s[j]>='A'&&s[j]<='Z'){
				f[s[j]-'A']++;
			}
		}
    }
    for(int i=0;i<26;i++) maxn=max(maxn,f[i]);
    for(int i=0;i<26;i++){
    	for(int j=maxn;j>0;j--){
    		if(f[i]>=j) c[i][j]='*';
    		else c[i][j]=' ';
		}
	}
	for(int j=maxn;j>0;j--){
    	for(int i=25;i>=0;i--){
    		if(c[i][j]!=' '){
    			for(int ii=0;ii<=i;ii++){
    				if(ii==0) cout<<c[ii][j];
    				else cout<<' '<<c[ii][j];
				}
				break;
			}
		}
		cout<<endl;
	}
	for(int i=0;i<26;i++){
		if(i==0) cout<<char(i+'A');
		else cout<<' '<<char(i+'A');
	}
    return 0;
}
