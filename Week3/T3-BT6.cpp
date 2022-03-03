#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==32) a++;
    }
    cout<<a+1;
    return 0;
}
