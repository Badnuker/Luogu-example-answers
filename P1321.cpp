#include <bits/stdc++.h>
using namespace std;

string s;
int b,m,g;
int main(){
    cin>>s;
    m=s.size();
    for(int i=0;i<m;i++){
    	if(s[i]=='b'){
    		if(s[i+1]=='o'){
    			if(s[i+2]=='y'){
    				i+=2;
    				b++;
				}else{
					i+=1;
					b++;
				}
			}else{
				b++;
			}
		}
		else if(s[i]=='o'){
			if(s[i+1]=='y'){
				i+=1;
				b++;
			}else{
				b++;
			}
		}
		else if(s[i]=='y') b++;
		else if(s[i]=='g'){
			if(s[i+1]=='i'){
				if(s[i+2]=='r'){
					if(s[i+3]=='l'){
						i+=3;
						g++;
					}else{
						i+=2;
						g++;
					}
				}else{
					i+=1;
					g++;
				}
			}else{
				g++;
			}
		}
		else if(s[i]=='i'){
    		if(s[i+1]=='r'){
    			if(s[i+2]=='l'){
    				i+=2;
    				g++;
				}else{
					i+=1;
					g++;
				}
			}else{
				g++;
			}
		}
		else if(s[i]=='r'){
			if(s[i+1]=='l'){
				i+=1;
				g++;
			}else{
				g++;
			}
		}
		else if(s[i]=='l') g++;
	}
	cout<<b<<endl<<g;
}
