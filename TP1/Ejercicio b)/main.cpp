#include <iostream>

using namespace std;

int main()
{
    int m1, b1, m2, b2;
    cout << "ingrese m1" << endl;
    cin >> m1;
    cout << "ingrese b1" << endl;
    cin >> b1;
    cout << "ingrese m2" << endl;
    cin >> m2;
    cout << "ingrese b2" << endl;
    cin >> b2;


    cout << "F(x)= " << m1 << "x + " << b1 << endl;
    cout << "G(x)= " << m2 << "x + " << b2 << endl;
cout << "----------------------------------------" << endl;
    if ((m1 == m2) && (b1 != b2))
    {
    cout << "\n No hay interseccion, son paralelas \n" << endl;
    }
      if (m1 != m2)
    {
        cout << "el valor de x=" << -(b2-b1)/(m2-m1) << endl;
        cout << "el valor de y=" << m1 * (-(b2-b1)/(m2-m1)) + b1 << endl;
        cout << "la interseccion es (x,y)=" << "(" << -(b2-b1)/(m2-m1) << ";" << m1 * (-(b2-b1)/(m2-m1)) + b1 << ")" << endl;
    }
       if ((m1 == m2) && (b1 == b2))
    {
         cout << "son identicas" << endl;
    }
return 0;

}
