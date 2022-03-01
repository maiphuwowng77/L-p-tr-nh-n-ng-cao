#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = n/7;
    if(n>0 && n<10000){
        for(int i=1;i<= m;i++){
            cout<<i*7<<" ";
        }
    }
    return 0;
}
