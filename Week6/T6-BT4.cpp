#include<bits/stdc++.h>
using namespace std;
int main(){
	string x;
	getline(cin,x);
	for(int i=0;i<x.length();i++){
		if(x[i]==x[i+1]){
			x= x.substr(0,i+1)+"*"+x.substr(i+1);
		}
	}
	cout<<x<<endl;
	return 0;
}
