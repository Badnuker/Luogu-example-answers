#include<bits/stdc++.h>
using namespace std;

int n,x=1;
int main(){
	cin>>n;
	while(n>x){
		n-=x;
		x++;
	}
	if(x%2==0) cout<<n<<'/'<<x+1-n;
	else cout<<x+1-n<<'/'<<n;
	return 0;
}
