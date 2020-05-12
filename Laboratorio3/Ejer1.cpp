#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
      int a, b, c;
      float x;

cout<< "Bienvenido a su confiable programa para calcular el promedio de 3 datos enteros.";
cout<<endl;
cout<< "A continuacion ingrese los datos que necesite promediar:";
cout<<endl;
cout<<endl;

cout<< "Por favor, ingrese a:";
cin>> a;

cout<< "Por favor, ingrese b:";
cin>> b;

cout<< "Por favor, ingrese c:";

cin>> c;

x =  (a + b + c)/3;

cout<< "El promedio de los resultados ingresados es el siguiente:";
cout<<endl;
cout<< x;

return 0;

}