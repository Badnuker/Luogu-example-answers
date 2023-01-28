#include<bits/stdc++.h>
using namespace std;

int st[70],flag[70],a[70];
int n,t,f,len,sum,s;

void dfs(int m,int l,int p){ 
	int i;
	if(!l){
		if(m==s){
			f=1;
			return;
		}
		for(i=1;i<=n;i++){
			if(!flag[i]) break;
		}
		flag[i]=1;
		dfs(m+1,len-st[i],i);
		flag[i]=0;
		if(f) return;
	}
	int ll=p+1,rr=n,mid;
    while(ll<rr){
        mid=(ll+rr)/2;
        if(st[mid]<=l) rr=mid;
        else ll=mid+1;
    }
	for(i=ll;i<=n;i++){
		if(!flag[i]){
			flag[i]=1;
			dfs(m,l-st[i],i);
			flag[i]=0;
			if(f) return;
			if(l==st[i]||l==len) return;
			i=a[i];
			if(i==n) return;
		}
	}
	
}

bool cmp(int a,int b){
	return a>b;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&st[i]);
		sum+=st[i];
	}
	sort(st+1,st+1+n,cmp);
	a[n]=n;
    for(int i=n-1;i>0;i--){
        if(st[i]==st[i+1]) a[i]=a[i+1];
        else a[i]=i;
    }
	int maxi=sum/2;
	for(int i=st[1];i<=maxi;i++){
		if(sum%i!=0) continue;
		len=i;
		s=sum/i;
		flag[1]=1;
		dfs(1,len-st[1],1);
		flag[1]=0;
		if(f){
			printf("%d",i);
			return 0;
		}
	}
	printf("%d",sum);
	return 0;
}
