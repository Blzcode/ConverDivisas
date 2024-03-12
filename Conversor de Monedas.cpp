#include <iostream>
using namespace std;
int divisa=0;
float cantidad=0;
int  main()  
{



cout<<"Bienvenido al conversor de monedas express \n" ;

cout<<"Favor indique su tipo de divisa\n";
cout<<"1.Quetzales\n2.Euros\n3.Dolares\n---> ";
cin>>divisa;

system("clear");


cout<<"Muchas gracias, ahora ingrese la cantidad a convertir\n---> ";
cin>>cantidad;

switch (divisa)
{
case 1:
cout<<"Sus Q." << cantidad << " equivalen a: \n";
cout<<"Euros:   E."<< cantidad * 0.12  <<"\n";
cout<<"Dolares: $."<< cantidad * 0.13  <<"\n";

    break;

case 2:
cout<<"Sus E." << cantidad << " equivalen a: \n";
cout<<"Quetzalez:   Q."<< cantidad * 8.55  <<"\n";
cout<<"Dolares:     $."<< cantidad * 1.09 <<"\n";

    break;

case 3:
cout<<"Sus $." << cantidad << " equivalen a: \n";
cout<<"Quetzalez:   Q."<< cantidad * 7.82  <<"\n";
cout<<"Euros:       E."<< cantidad * 0.91 <<"\n";

    break;

default:
    break;
}



}