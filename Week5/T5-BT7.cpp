#include<bits/stdc++.h>
using namespace std;

	struct student{
		int no;
		string name;
		int age;
		string address;
		student() :no(0),name(""),age(0),address("") {}
		student(int no,string name,int age,string address):no(no),name(name),age(age),address(address) {
		}
		void studentinfor(){
			cout<<"Nhap du lieu hoc sinh: "<<endl;
			cin>>no;
			cin.ignore();
			getline(cin,name);
			cin>>age;
			cin.ignore();
			getline(cin,address);
		}
		void printage14(){
			cout<<"Nguoi 14 tuoi la: "<<endl;
			if(age==14){
				cout<<name<<endl;
			}
		}
		void even(){
			cout<<"Nguoi co so thu tu le la: "<<endl;
			if(no%2==0){
				cout<<name<<endl;
			}
		}
		void display(){
			int x;
			cin>>x;
			cout<<"Nguoi co so thu tu "<<x<<" la: "<<endl;
			if(no==x){
				cout<<no<<" "<<name<<" "<<age<<" "<<address<<endl;
			}
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
			student x ;
			x.no= students[i]->no;x.name= students[i]->name;x.age= students[i]->age;x.address= students[i]->address;
			x.printage14();
			x.even();
			x.display();
		}
		return 0;
	}
