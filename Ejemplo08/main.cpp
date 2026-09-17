#include <iostream>
using namespace std;

// Declaración y definición juntas
int menor(int x, int y) 
{
    return x < y ? x : y;
}

// Solo la declaración...
int menorde3(int x, int y, int z); 

int main(int argc, char** argv)
{
    int a, b, c;
    cout << "Escribe tres datos enteros: " << endl;
    cin >> a >> b >> c;
    cout << "El menor de los tres numeros es " << menorde3(a, b, c) << endl;
    return 0;
}

// ...y aquí la definición
int menorde3(int x, int y, int z) 
{
    return menor(menor(x, y), z);
}
