#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(0<n && n<=1000){
        double a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==a[i-1]) continue;
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
