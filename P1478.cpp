#include<bits/stdc++.h>
using namespace std;

struct apple{
	int h,s;
}ap[5005];

bool cmp(apple a,apple b){
	return a.s<b.s||a.s==b.s&&a.h<b.h;
}

int ans;
int main(){
	int n,s,a,b;
	cin>>n>>s>>a>>b;
	for(int i=1;i<=n;i++) cin>>ap[i].h>>ap[i].s;
	sort(ap+1,ap+n+1,cmp);
	//for(int i=1;i<=n;i++) cout<<ap[i].h<<' '<<ap[i].s<<endl;
	for(int i=1;i<=n;i++){
		if(ap[i].h<=a+b){
			if(ap[i].s<=s){
				ans++;
				s-=ap[i].s;
			}else break;
		}
	}
	cout<<ans;
	return 0;
}

