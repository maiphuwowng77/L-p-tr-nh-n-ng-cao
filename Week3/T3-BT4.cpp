#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n+1];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    bool b= false;
    if(a[0]<=a[1] && a[1]<=a[2]){
        b =true;
    }
    sort(a,a+n+1);
    if(b==true){
        for(int i=0;i<=n;i++){
            cout<<fixed<<setprecision(2)<<a[i]<<" ";
        }
    }else{
        for(int i=n;i>=0;i--){
            cout<<fixed<<setprecision(2)<<a[i]<<" ";
        }
    }
    return 0;
}
