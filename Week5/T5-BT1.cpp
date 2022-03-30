#include<bits/stdc++.h>
using namespace std;

	struct student{
		int no;
		string name;
		int age;
		double mark;
		student(int no,string name,int age,double mark):no(no),name(name),age(age),mark(mark) {
		}
	};
	int main(){
		student x(1,"Phuong",19,8);
		cout<<x.no<<" "<<x.name<<" "<<x.age<<" "<<x.mark;
		return 0;
	}
