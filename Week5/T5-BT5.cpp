#include<bits/stdc++.h>
using namespace std;

	struct marks{
		int no;
		string name;
		double mark1,mark2,mark3;
		marks() :no(0),name(""),mark1(0),mark2(0),mark3(0) {}
		marks(int no,string name,double mark1,double mark2,double mark3):no(no),name(name),mark1(mark1),mark2(mark2),mark3(mark3) {
		}
		void studentinfor(){
			cout<<"Nhap du lieu hoc sinh: "<<endl;
			cin>>no;
			cin.ignore();
			getline(cin,name);
			cin>>mark1>>mark2>>mark3;
		}
		void display(){
			double percentage= (mark1+mark2+mark3)/30*100;
			cout<<fixed<<setprecision(2)<<percentage<<" %"<<endl;
		}
	};
	int main(){
		vector<marks*> students;
		for(int i=0;i<5;i++){
			marks* x=new marks();
			x->studentinfor();
			students.push_back(x);
		}
		for(int i=0;i<15;i++){
			students[i]->display();
		}
		return 0;
	}
