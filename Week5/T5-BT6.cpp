#include<bits/stdc++.h>
using namespace std;
struct complex{
	double x,y;
	complex():x(0),y(0){
	}
	complex(double x,double y):x(x),y(y){
	}
	void print(){
		cout<<x<<" "<<y<<endl;
	}
	complex add(complex a){
	return add(x+a.x,y+a.y);
	}
	complex subtract(complex a){
	return subtract(x-a.x,y-a.y);
	}
	complex multiply(complex a){
	return multply(a.x*x-a.y*y,a.x*y+a.y*x);
	}
};



int main()
{
	complex a,b;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	a.add(b).print();
	a.subtract(b).print();
	a.multiply(b).print();
	return 0;
}
