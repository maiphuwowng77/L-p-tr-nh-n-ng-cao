#include<bits/stdc++.h>
using namespace std;

	struct employees{
		string name;
		int year;
		int salary;
		string address;
		employees() :name(""),year(0),salary(0),address("") {}
		employees(string name,int year,int salary,string address):name(name),year(year),salary(salary),address(address) {
		}
		
		
	};
	void print(vector<employees>& v){
			cout<<"Name"<<"\t"<<"Year of joining"<<"\t"<<"\t"<<"Address"<<endl;
			for(int i=0;i<v.size();i++){
				cout<<v[i].name<<"\t"<<v[i].year<<"\t\t"<<v[i].address<<endl;
			}
		}
	
	int main(){
		employees a("Robert",1994,100,"64C- WallsStreat");
		employees b("Sam",2000,100,"68D- WallsStreat");
		employees c("John",1999,100,"26B- WallsStreat");
		vector<employees> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		print(v);
		return 0;
	}
