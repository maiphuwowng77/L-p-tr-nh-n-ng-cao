#include<bits/stdc++.h>
using namespace std;

	struct employees{
		string name;
		int salary;
		int hours;
		employees() :name(""),salary(0),hours(0) {}
		employees(string name,int salary,int hours):name(name),salary(salary),hours(hours) {
		}
		void infor(){
			getline(cin,name);
			cin.ignore();
			cin>>salary>>hours;
		}
		
		
	};
	void increasesalary(vector<employees>& v){
			for(int i=0;i< v.size();i++){
				if(v[i].hours>=8&&v[i].hours<10){
					v[i].salary=v[i].salary+50;
				}else{
					if(v[i].hours>=10&&v[i].hours<12){
						v[i].salary=v[i].salary+100;
					}else{
						if(v[i].hours>=12){
							v[i].salary=v[i].salary+150;
						}
					}
				}
			}
	}
	void print(vector<employees>& v){
			for(int i=0;i< v.size();i++){
				cout<<v[i].name<<" "<<v[i].salary<<endl;
			}
	}
	int main(){
		vector<employees> v;
		for(int i=0;i<1;i++){
			employees x;
			x.infor();
			v.push_back(x);
		}
		increasesalary(v);
		print(v);
		return 0;
	}
