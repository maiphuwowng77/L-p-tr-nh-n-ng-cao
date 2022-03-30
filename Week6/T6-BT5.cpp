#include<bits/stdc++.h>
using namespace std;
class area{
	public:
		double length,breadth;
		area():length(0),breadth(0){
		}
		area(double length,double breadth): length(length),breadth(breadth){
		}
		double returnArea(){
			return length*breadth;
		}
};
int main()
{
	area x;
	cin>>x.length>>x.breadth;
	cout<<x.returnArea();
	return 0;
}
