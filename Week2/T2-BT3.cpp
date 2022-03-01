#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int lowerBound,upperBound;
    cin>>lowerBound>>upperBound;
    int m = sqrt(lowerBound);
    if(m*m==lowerBound) m=m;
    else m=m+1;
    int n = sqrt(upperBound);
    for(int i= m;i<=n;i++){
        cout<<i*i<<" ";
    }
    return 0;
}
