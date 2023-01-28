#include<bits/stdc++.h>
using namespace std;

int n,k,a[257],r,t=1,m,c=0;
bool f=0;
string num;
int main(){
    cin>>num>>k;
    n=num.size();
    for(int i=1;i<=n;++i) a[i]=num[i-1]-'0';
    r=n-k;
    while(c<r){
        m=t;
        for(int i=t;i<=k+t;++i)if(a[m]>a[i])m=i;
        if(a[m])f=1;
        if(f)cout<<a[m];
        k-=m-t;
        t=m+1;
        c++;
    }
    if(!f)cout<<0;
    return 0;
}
