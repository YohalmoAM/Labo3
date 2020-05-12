#include <iostream>
#include <math.h>

using namespace std;

#define pi  3.1415

int main(void)
{
    int radio;
    float perimetro;
    float area;

    cout<< "Hola usuario, este es su programa para calcular areas y perimetros de circunferencias";
    cout<<endl;
    cout<<endl;
    cout << "Por favor ingrese el radio de la circunferencia (m) a calcular:";
    cin >> radio;

    perimetro = (2 * pi * radio);
    area = (pi * pow(radio, 2));

    cout << "Los calculos se han realizado correctamente, estos son sus resultados:";
    cout<<endl;
    cout<<endl;
    cout << "El area de la circunferencia es " << area << " metros cuadrados." ;
    cout<<endl;
    cout << "El perimetro de la circunferencia es " << perimetro << " metros."; 
   
    return 0;
}