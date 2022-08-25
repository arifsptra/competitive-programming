#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f;
    x=(a+b+c+d+e+f)/6;
    cout << fixed << setprecision(8) << x;
    return 0;
}