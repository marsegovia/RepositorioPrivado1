#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Ingrese un km" << endl;
    cin >> x;
    cout << "ingreso :" << x << "Km/h" << endl;
    cout << "La conversion es :" <<  ((x * 1000) / (3600)) << "m/s" << endl;

    return 0;
}
