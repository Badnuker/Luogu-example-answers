#include <bits/stdc++.h>
using namespace std;

int n,m,mins[20005],minv[20005],ant;
void dfs(int dep,int h,int r,int s,int v){
    if(dep==0) {
        if(v==n)
            ant=min(ant,s);
        return;
    }
    if(v+minv[dep]>n) return;
    if(s+mins[dep]>ant) return;
    if(s+2*(n-v)/r>ant) return;
    for(int i=r-1;i>=dep;i--){
        if(dep==m)
            s=i*i;
        int Maxh=min(h-1,(n-v-minv[dep-1])/(i*i));
        for(int j=Maxh;j>=dep;j--){
            dfs(dep-1,j,i,s+2*i*j,v+i*i*j);
        }
    }
}

int main(){
    cin>>n>>m;
    ant=n;
    int MaxR=sqrt(n);
    for(int i=1;i<=n;i++){
        minv[i]=minv[i-1]+i*i*i;
        mins[i]=mins[i-1]+2*i*i;
    }
    dfs(m,n,MaxR,0,0);
    if(ant==n)
        cout<<0;
    else
        cout<<ant;
    return 0;
}
