#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a[0]==45) cout<<a.length()-1;
    else cout<<a.length();
    return 0;
}
