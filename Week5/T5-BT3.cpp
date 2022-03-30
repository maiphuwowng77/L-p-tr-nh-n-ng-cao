#include<bits/stdc++.h>
using namespace std;

	struct student{
		int no;
		string name;
		int age;
		double mark;
		student() :no(0),name(""),age(0),mark(0) {}
		student(int no,string name,int age,double mark):no(no),name(name),age(age),mark(mark) {
		}
		void studentinfor(){
			cout<<"Nhap du lieu hoc sinh: "<<endl;
			cin>>no;
			cin.ignore();
			getline(cin,name);
			cin>>age>>mark;
		}
	};
	int main(){
		vector<student*> students;
		for(int i=0;i<15;i++){
			student* x=new student();
			x->studentinfor();
			students.push_back(x);
		}
		for(int i=0;i<15;i++){
			cout<<students[i]->no<<" "<<students[i]->name<<" "<<students[i]->age<<" "<<students[i]->mark;
		}
		return 0;
	}
