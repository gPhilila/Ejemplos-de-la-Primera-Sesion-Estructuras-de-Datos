#include <iostream>
using namespace std;

void sube(int* n)
{
    (*n)++;
    return;
}

void mas(int& n)
{
    n++;
    return;
}

int main(int argc, char** argv)
{
    int a;
    cout << "Escribe un dato entero: ";
    cin >> a;
    
    for(int i = 0; i < 10; i++) {
        cout << i << ": " << a << endl;
        sube(&a);
    }
    
    cout << endl;
    
    for(int i = 0; i < 10; i++) {
        cout << i << ": " << a << endl;
        mas(a);
    }
    
    return 0;
}
