#include<bits/stdc++.h>
using namespace std;

string s; 
int n;
int main(){
	getline(cin,s);
	int m=s.size();
	for(int i=0;i<m;i++){
		if(s[i]=='a') n+=1;
		else if(s[i]=='b') n+=2;
		else if(s[i]=='c') n+=3;
		else if(s[i]=='d') n+=1;
		else if(s[i]=='e') n+=2;
		else if(s[i]=='f') n+=3;
		else if(s[i]=='g') n+=1;
		else if(s[i]=='h') n+=2;
		else if(s[i]=='i') n+=3;
		else if(s[i]=='j') n+=1;
		else if(s[i]=='k') n+=2;
		else if(s[i]=='l') n+=3;
		else if(s[i]=='m') n+=1;
		else if(s[i]=='n') n+=2;
		else if(s[i]=='o') n+=3;
		else if(s[i]=='p') n+=1;
		else if(s[i]=='q') n+=2;
		else if(s[i]=='r') n+=3;
		else if(s[i]=='s') n+=4;
		else if(s[i]=='t') n+=1;
		else if(s[i]=='u') n+=2;
		else if(s[i]=='v') n+=3;
		else if(s[i]=='w') n+=1;
		else if(s[i]=='x') n+=2;
		else if(s[i]=='y') n+=3;
		else if(s[i]=='z') n+=4;
		else if(s[i]==' ')n++;
	}
	cout<<n;
	return 0;
}
