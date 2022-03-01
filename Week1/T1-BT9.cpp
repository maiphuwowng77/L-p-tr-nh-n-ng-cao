#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a > 0 && a < 1000) && (b > 0 && b < 1000) && (c > 0 && c < 1000) && a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) * 1.0 / 2;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2)<< S << endl;
    }
    else {
        cout << "invalid";
    }
    return 0;
}
