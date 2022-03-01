#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    double sum=0.00;
    for(int i=0;i<n;i++){
        sum+= a[i]*b[i];
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}
