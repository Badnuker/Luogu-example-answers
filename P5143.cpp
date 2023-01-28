#include<bits/stdc++.h>
using namespace std;

struct p{
	double x,y,z;
} a[50005];

bool cmp(p a,p b){
	return a.z<b.z;
}

double s; 
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	sort(a,a+n,cmp);
	for(int i=1;i<n;i++){
		s+=sqrt(pow(a[i].x-a[i-1].x,2)+pow(a[i].y-a[i-1].y,2)+pow(a[i].z-a[i-1].z,2));
	}
	printf("%.3lf",s);
	return 0;
} 

