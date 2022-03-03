#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();i++){
        if((s[i]<=90 && s[i]>=65)||(s[i]>=97 && s[i]<=122)){
            a++;
        }
        else {
            if(s[i]>=48 && s[i]<=57){
                b++;
            }
            else{
                c++;
            }
        }
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
