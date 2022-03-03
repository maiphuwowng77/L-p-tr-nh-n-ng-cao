#include<iostream>
using namespace std;
int main()
{
    string text;
    getline(cin,text);
    int countStartSpaces=0;
    while(text[countStartSpaces]==32){
        cout<<text[countStartSpaces];
        countStartSpaces++;
    }
    for(int i=countStartSpaces;i<text.length();i++){
        if((text[i]==32 && text[i-1]!=32) ||(text[i]!=32)){
            cout<<text[i];
        }
    }
    return 0;
}
