#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q; 
    cin>>q;
    map <string,int> m; 
    while(q--) {
        int index,mark; 
        string s; 
        cin>>index;
        cin>>s; 
        switch(index) {
            case 1: cin>>mark; m[s]+=mark; break; 
            case 2: m.erase(s); break; 
            case 3: cout<< m[s] << endl; 
        }
    }
    return 0; 
}



