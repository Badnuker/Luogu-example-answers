#include<bits/stdc++.h>
using namespace std;

int m,n,a[10],flag;
string s[10];
int main(){
	while(cin>>s[m++]);
	m--;
	for(int i=0;i<m;i++){
		if(s[i]=="a"||s[i]=="one"||s[i]=="first"||s[i]=="another"){
			a[n]=1;
			n++;
		}else if(s[i]=="two"||s[i]=="both"||s[i]=="second"){
			a[n]=4;
			n++;
		}else if(s[i]=="three"||s[i]=="third"){
			a[n]=9;
			n++;
		}else if(s[i]=="four"){
			a[n]=16;
			n++;
		}else if(s[i]=="five"){
			a[n]=25;
			n++;
		}else if(s[i]=="six"){
			a[n]=36;
			n++;
		}else if(s[i]=="seven"){
			a[n]=49;
			n++;
		}else if(s[i]=="eight"){
			a[n]=64;
			n++;
		}else if(s[i]=="nine"){
			a[n]=81;
			n++;
		}else if(s[i]=="ten"){
			a[n]=0;
			n++;
		}else if(s[i]=="eleven"){
			a[n]=21;
			n++;
		}else if(s[i]=="twelve"){
			a[n]=44;
			n++;
		}else if(s[i]=="thirteen"){
			a[n]=69;
			n++;
		}else if(s[i]=="fourteen"){
			a[n]=96;
			n++;
		}else if(s[i]=="fifteen"){
			a[n]=25;
			n++;
		}else if(s[i]=="sixteen"){
			a[n]=56;
			n++;
		}else if(s[i]=="seventeen"){
			a[n]=89;
			n++;
		}else if(s[i]=="eighteen"){
			a[n]=24;
			n++;
		}else if(s[i]=="ninteen"){
			a[n]=61;
			n++;
		}else{
			a[n]=0;
			n++;
		}
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
    	if(flag){
        	printf("%.2d",a[i]);
        }else{
            if(a[i]){ 
                printf("%d",a[i]);
                flag=1;
            }
        }
    }
    if(!flag) cout<<0;
	return 0;
}
