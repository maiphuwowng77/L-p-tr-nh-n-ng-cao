#include<iostream>
using namespace std;
int main()
{
    string text;
    getline(cin,text);
    if(text[0]>=48&&text[0]<=57) cout<<"Invalid username.";
    else{
        if(text.length()<6 || text.length()>15) cout<<"Invalid username.";
        else{
            bool a= true;
            for(int i=0;i<text.length();i++){
                if(!((text[i]>=48 && text[i]<=57) || (text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122))){
                    cout<<"Invalid username.";
                    a= false;
                    break;
                }
            }
            if(a== true) cout<<"Valid username.";
        }
    }
    return 0;
}
