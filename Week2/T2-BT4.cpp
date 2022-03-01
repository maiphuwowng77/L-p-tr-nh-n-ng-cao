#include<iostream>
using namespace std;
int main()
{
    int chi,dog,sum,foot;
    cin>>sum>>foot;
    bool a= false;
    chi=0;
    while(chi<=sum){
        if(chi*2+(sum-chi)*4==foot){
            a= true;
            break;
        }
        else {
            chi++;
        }
    }
    if(a== true) cout<<"chicken = "<<chi<<", dog = "<<sum-chi;
    else cout<<"invalid";
    return 0;
}
