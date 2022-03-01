#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    
    double i=1,j=0;
    int  x;
    cin>>x;
    double sum=1,oldsum=0;
    double k=1;
    do {
        
        oldsum=sum;
        j=j+1;
        i=i*j;
        k=k*x;
        sum+=k/double(i);
        
    }while(sum-oldsum>0.001);
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}
