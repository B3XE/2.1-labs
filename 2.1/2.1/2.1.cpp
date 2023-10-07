#include <math.h>


#include <iostream>
using namespace std;
int main()
{
    double x, z1, z2;
    cout << "x = "; cin >> x;
    z1 = ((x + 2) / sqrt(2 * x) - x / (sqrt(2 * x) + 2) + 2 / (x - sqrt(2 * x))) * (sqrt(x) - sqrt(2)) / (x + 2);
    z2 = 1 / (sqrt(x) + sqrt(2));
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
}