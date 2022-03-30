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
		for(int i=0;i<5;i++){
			student* x=new student();
			x->studentinfor();
			students.push_back(x);
		}
		cout<<students[1]->no<<" "<<students[1]->name<<" "<<students[1]->age<<" "<<students[1]->mark;
		return 0;
	}
