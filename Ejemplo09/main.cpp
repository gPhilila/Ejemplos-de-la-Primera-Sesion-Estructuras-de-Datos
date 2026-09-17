#include <iostream>
using namespace std;

void machacal(int x, int* y)
{
    *y = x;
    return;
}

void machaca2(int x, int& y)
{
    y = x;
    return;
}

int main(int argc, char** argv)
{
    int a, b;
    cout << "Escribe dos datos enteros:" << endl;
    cin >> a >> b;
    
    int copia = b;
    cout << "Antes de machaca1: " << a << " y " << b << endl;
    machacal(a, &b);
    cout << "Despues de machacal: " << a << " y " << b << endl << endl;
    
    b = copia; // restauramos b para probar el segundo método
    
    cout << "Antes de machaca2: " << a << " y " << b << endl;
    machaca2(a, b);
    cout << "Despues de machaca2: " << a << " y " << b << endl;
    
    return 0;
}