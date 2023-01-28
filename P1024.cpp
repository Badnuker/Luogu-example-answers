#include <bits/stdc++.h>
using namespace std;

double a,b,c,d;
double f(double x){
	return a*x*x*x+b*x*x+c*x+d;
}
int sum;
int main(){
	cin>>a>>b>>c>>d;
	double l=-100,r=-100+0.001;
	while(r<100){
		if(f(l)*f(r)<0){printf("%.2lf ",l),sum++;}
		l+=0.001,r+=0.001;
		if(sum==3) break;
	}
	return 0;
}
