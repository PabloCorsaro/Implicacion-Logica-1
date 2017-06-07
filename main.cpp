#include <iostream>

using namespace std;

int main()
{
    char resp1, resp2;
    bool respu1 = false;
    bool respu2 = false;

    cout << "Bienvenido" << endl;
    cout << "Pertenece a algun partido politico? (S o N)" << endl;
    cin >> resp1;
    cout << "Cuenta con el aval de la menos 2% de sus miembros? (S o N)" << endl;
    cin >> resp2;

    if(resp1 == 'S')
    {
        respu1 = true;
    }
    if(resp2 == 'S')
    {
        respu2 = true;
    }

    if(respu1 && respu2)
    {
        cout << "Puede postularse." << endl;
    }
    else
    {
        cout << "No puede postularse." << endl;
    }

    return 0;
}
