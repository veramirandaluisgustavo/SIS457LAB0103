#include <iostream>
using namespace std;
int main()
{
    int orden;
    do {
        cout << "imprimir biografia=1\n";
        cout << "salir del programa=2\n";
        cin >> orden;
        if (orden == 1)
            cout << "Nombre:Luis Gustavo Vera Miranda\n Edad:21 \n Carreara:Ing.Sistemas\n\n\n ";

    } while (orden == 1);
    return 0;
}