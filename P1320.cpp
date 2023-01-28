#include <bits/stdc++.h>
using namespace std;

char a,b='0';
int n,ans[1000001],m=1;

int main(){
    while(cin>>a){
		n++;
		if(a==b) ans[m]++;
		else{
			ans[++m]++;
			b=a;
		}
 	}
    cout<<sqrt(n);
    for(int i=1;i<=m;i++) cout<<" "<<ans[i];
}
