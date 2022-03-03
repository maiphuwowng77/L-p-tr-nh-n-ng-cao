#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool b= true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            b= false;
            break;
        }
    }
    if(b== true) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
    return 0;
}
