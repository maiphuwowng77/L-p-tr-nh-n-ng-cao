#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0.00;
    for(int i=0;i<n;i++){
        sum+= a[i];
    }
    double average= sum/n;
    double T=0.00;
    for(int i=0;i<n;i++){
        T+= pow(a[i]-average,2);
    }
    double var=T/n;
    cout<<fixed<<setprecision(2)<<var;
    return 0;
}

