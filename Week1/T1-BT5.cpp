#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float c;
    cin>>c;
    if(c>=0){
        float f= c*1.8 + 32;
        cout<<fixed<<setprecision(2)<<f;
    }
    return 0;
}
