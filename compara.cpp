#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese el numero a: ";
    cin >> a;
    cout << "Ingrese el numero b: ";
    cin >> b;
    if(a==b)
       cout << "Los numeros ingresados son iguales"<<endl;
    else if(a<b)
        cout << "El numero " << a << " es menor que " << b<<endl;
    else
        cout << "El numero " << b << " es menor que " << a<<endl;

    return 0;
}
