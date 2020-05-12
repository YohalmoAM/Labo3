#include <iostream>
#include <string>

using namespace std;

int main()
{
    string product;
    int prez = 19;
    int cant ;
    float total;

    cout << "Esta es la tienda online de OtakuStore";
    cout<<endl;
    cout << "Ingrese el nombre del producto que desea adquirir:";
    cout<<endl; 

    cin >> product;
    cout<<endl;
    
    cout << "Ingrese la cantidad de " << product << " que desea adquirir:";
    cout<<endl;
    cin >> cant;

    cout << "Segun la cantidad ingresada, usted ha ordenado : " << cant << " " << product << ".";
    cout<<endl;
    total= (prez * cant);

    cout << "Su total de compra es $" << total << ".00";
    cout<<endl;
    cout << "Gracias por su compra, se le hara su entregara lo mas pronto posible."; 

    return 0;


}