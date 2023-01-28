#include<bits/stdc++.h>
using namespace std;

int cmap[6][6];
bool temp[6][6];
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int total,fx,fy,sx,sy,T,n,m,l,r;

void bfs(int x,int y){
    if(x==fx&&y==fy){
        total++;
        return;
    }else{
        for(int i=0;i<=3;i++){
            if(temp[x+dx[i]][y+dy[i]]==0&&cmap[x+dx[i]][y+dy[i]]==1){
                temp[x][y]=1;
                bfs(x+dx[i],y+dy[i]);
                temp[x][y]=0;
            }    
        } 
    }
}
int main(){
    cin>>n>>m>>T;
    for(int ix=1;ix<=n;ix++)
        for(int iy=1;iy<=m;iy++)
            cmap[ix][iy]=1;
    cin>>sx>>sy;
    cin>>fx>>fy;
    for(int u=1;u<=T;u++){
        cin>>l>>r;
        cmap[l][r]=0;
    }
    bfs(sx,sy);
    cout<<total;
    return 0;
} 
