#include<bits/stdc++.h>
using namespace std;
struct book{
	int accessionnumber;
	string nameofauthor;
	string booktitle;
	bool issued;
	book():accessionnumber(0),nameofauthor(""),booktitle(""),issued(0){
	}
	book(int accessionnumber,string nameofauthor,string booktitle,bool issued):accessionnumber(accessionnumber),nameofauthor(nameofauthor),booktitle(booktitle),issued(issued){
	}
	void display(){
		cout<<accessionnumber<<" "<<nameofauthor<<" "<<booktitle<<" "<<issued<<endl;
	}
};
void addnewbook(vector<book> v){
	book x;
	cout<<"Nhap thong tin sach: "<<endl;
	cin>>x.accessionnumber;
	cin.ignore();
	getline(cin,x.nameofauthor);
	getline(cin,x.booktitle);
	cin>>x.issued;
	v.push_back(x);
}
void displayparticularauthor(vector<book> v){
	cout<<"Nhap ten tac gia can tim: "<<endl;
	string name;
	getline(cin,name);
	for(int i=0;i<v.size();i++){
		if(v[i].nameofauthor==name){
			cout<<v[i].booktitle<<endl;
		}
	}
}
void displayparticulartitle(vector<book> v){
	cout<<"Nhap ten sach can tim: "<<endl;
	string title;
	getline(cin,title);
	int sum=0;
	for(int i=0;i<v.size();i++){
		if(v[i].booktitle==title){
			sum++;
		}
	}
	cout<<sum<<endl;
}
void displaytotal(vector<book> v){
	cout<<"Tong so sach trong thu vien la: "<<endl;
	cout<<v.size()<<endl;
}
book issue(book& x){
	x.accessionnumber--;
	return x;
}
int main()
{
	vector<book> v;
	for(int i=0;i<10;i++){
		addnewbook(v);
	}
	displayparticularauthor(v);
	displayparticulartitle(v);
	displaytotal(v);
	book x(5,"abc","def",0);
	issue(x);
	x.display();
	return 0;
}
