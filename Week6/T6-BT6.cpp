#include<bits/stdc++.h>
using namespace std;
class Student{
	public:
		string name;
		int roll_no;
		Student():name(""),roll_no(0){
		}
		Student(int roll_no,string name):roll_no(roll_no),name(name){
		}
};
int main()
{
	Student(2,"John");
	return 0;
}
