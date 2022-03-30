#include<bits/stdc++.h>
using namespace std;

	struct customer{
		string name;
		int accountnumber;
		int balance;
		customer() :name(""),accountnumber(0),balance(0) {}
		customer(string name,int accountnumber,int balance):name(name),accountnumber(accountnumber),balance(balance) {
		}
		
		
	};
	void balancelessthan200(vector<customer> v){
			cout<<"Balance < 200: "<<endl;
			for(int i=0;i< v.size();i++){
				if(v[i].balance<200) cout<<v[i].name<<endl;
			}
	}
	void add100(vector<customer> v){
			cout<<"Balance > 1000: "<<endl;
			for(int i=0;i< v.size();i++){
				if(v[i].balance>1000){
					v[i].balance=v[i].balance+100;
					cout<<v[i].name<<" "<<v[i].balance<<endl;
				}
			}
	}
	int main(){
		vector<customer> v;
		customer a("phuong",123,1010);
		v.push_back(a);
		customer b("duong",456,150);
		v.push_back(b);
		balancelessthan200(v);
		add100(v);
		return 0;
	}
