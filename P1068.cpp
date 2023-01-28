#include<bits/stdc++.h>
using namespace std;

struct stu{
	int n,s;	
};
stu a[5005];

bool cmp(stu a,stu b){
	if(a.s==b.s) return a.n<b.n;
	return a.s>b.s;
}

int f,mm;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i].n>>a[i].s;
	}
	sort(a,a+n,cmp);
	m=floor(m*1.5);
 	int s=a[m-1].s;
	for(int i=0;i<n;i++){
		if(a[i].s>=s){
			mm++;
		}
		else{
			cout<<s<<' '<<i<<endl;
			f=1;
			break;
		}
	}
	if(!f) cout<<s<<' '<<m<<endl;
	for(int i=0;i<n;i++){
		if(a[i].s>=s){
			cout<<a[i].n<<' '<<a[i].s<<endl;
		}
		else{
			break;
		}
	}
	return 0;
}
