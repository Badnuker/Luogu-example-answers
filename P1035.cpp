#include<bits/stdc++.h>
using namespace std;

double sum;
int main(){
	int k;
	cin>>k;
	for(int i=1;;i++){
		sum+=1.0/i;
		if(sum>k){
			cout<<i;
			return 0;
		}
	}
}
