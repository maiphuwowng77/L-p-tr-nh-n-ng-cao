#include<bits/stdc++.h>
using namespace std;
struct distances{
	double inch,feet;
	distances() : inch(0),feet(0){
	}
	distances(double inch,double feet) : inch(inch),feet(feet){
	}
	distances add(distances other){
		distances s;
		if(inch+other.inch>12){
			s.inch=inch+other.inch-12;
			s.feet=feet+other.feet+1;
		}
		else{
			s.inch=inch+other.inch;
			s.feet=feet+other.feet;
		}
		return s;
	}
};
int main()
{
	distances a,b;
	cin>>a.feet>>a.inch;
	cin>>b.feet>>b.inch;
	distances s= a.add(b);
	cout<<s.feet<<" "<<s.inch;
	return 0;
}
