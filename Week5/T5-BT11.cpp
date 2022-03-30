#include<bits/stdc++.h>
using namespace std;
struct Date{
	int day,month,year;
	Date():day(0),month(0),year(0){
	}
	Date(int day,int month,int year):day(day),month(month),year(year){
	}
	Date add(int n){
		Date x;
		x.day=day+n;
		x.month=month;
		x.year=year;
		int daye[13];// dayend: ngay ket thuc cua thang
		daye[1]=31;daye[3]=31;daye[4]=30;daye[5]=31;daye[6]=30;daye[7]=31;daye[8]=31;daye[9]=30;daye[10]=31;daye[11]=30;daye[12]=31;
		if(year%4==0) daye[2]=29;
		else daye[2]=28;
		while(x.day>daye[month]){
			x.day= x.day - daye[month];
			x.month++;
			if(x.month>12){
				x.month=1;
				x.year=x.year+1;
			}
		}
		return x;
	}
	void print(){
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
int main()
{
	Date y(15,2,2022);
	Date x=y.add(45);
	x.print();
	return 0;
}
