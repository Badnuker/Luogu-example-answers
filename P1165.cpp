#include<bits/stdc++.h>
using namespace std;


int sta[200005],top;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a;
		if(a==0){
			cin>>b;
			top++;
			sta[top]=max(sta[top-1],b);
		}else if(a==1&&top!=0){
			top--;
		}else{
			cout<<sta[top]<<endl;
		}
	}
	return 0;
}

