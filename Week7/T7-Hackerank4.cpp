#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        vector<int>::iterator itr;
        itr = lower_bound(v.begin(), v.end(), x);
        if (*(itr + 1) == x || *itr == x)
            cout << "Yes " << itr - v.begin() + 1 << endl;
        else
            cout << "No " << itr - v.begin() + 1 << endl;
    }
    return 0;
}