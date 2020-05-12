#include <iostream>
#include <math.h>

using namespace std;


int main(){
    int a, b, c;
    float x;

    cout<< "Bienvenido a su programa para calcular la formula del CHICHARRONERO aka Cuadratica.";
    cout<<endl;
    cout<< "Por favor digite los numeros que desea calcular:";
    cout<<endl;

    cout<< "ingrese a: ";
    cin>>a;
    cout<< "ingrese b: ";
    cin>>b;
    cout<< "ingrese c: ";
    cin>>c;

    x = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);

    cout<<x;
    
    return 0;
}