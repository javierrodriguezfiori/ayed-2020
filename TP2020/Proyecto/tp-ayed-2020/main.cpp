#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

#include "Sucursal.h"
#include "ListaSucursal.h"

using namespace std;

//CARGA ARCHIVO
void leer_archivoDatos(ListaSucursal &sucursales);

int main()
{
    //CARACTERES SPANISH
    setlocale(LC_ALL,"Spanish");

    //CARGA ARCHIVO
//    leer_archivoDatos(sucursales);

    //LISTAS

    //MENU PRINCIPAL
    int opcion=8;

    while(opcion!=0){
        system("cls");
        cout << "Menú principal" << endl << endl << "1- Ranking por facturación" << endl << "2- Ranking por cantidad de artículos" << endl << "3- Ranking de rendimiento por m2" << endl << endl << "0- Salir" << endl << endl << "Ingrese una opción: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                //Ranking por facturación
                system("cls");
                cout << "Ranking por facturación" << endl << endl;
                system("pause");
                break;
            case 2:
                //Ranking por cantidad de artículos
                system("cls");
                cout << "Ranking por cantidad de artículos" << endl << endl;
                system("pause");
                break;
            case 3:
                //Ranking de rendimiento por m2
                system("cls");
                cout << "Ranking de rendimiento por m2" << endl << endl;
                system("pause");
                break;
            default:
                break;
        }
    }

    //FIN
    return 0;
}

void leer_archivo(ListaSucursal &sucursales){
    Sucursal sucursal;
    crear(sucursal);

    string id,provincia,articulos,facturacion,metros,casaMatriz;

    ifstream archivo;
    archivo.open("Datos.txt",ios::in);
    if(archivo.fail()){
        cout << "ERROR!: No se pudo abrir el archivo" << endl;
    }
    else {
        while(getline(archivo,id,'-')&&getline(archivo,provincia,'-')&&getline(archivo,articulos,'-')&&getline(archivo,facturacion,'-')&&getline(archivo,metros,'-')&&getline(archivo,casaMatriz,'-')){
            setId(sucursal,atoi(id.c_str()));
            setProvincia(sucursal,provincia.c_str());
            setArticulos(sucursal,atoi(articulos.c_str()));
            setFacturacion(sucursal,atof(facturacion.c_str()));
            setMetros(sucursal,atof(metros.c_str()));
            setCasaMatriz(sucursal,atoi(casaMatriz.c_str()));
//            adicionarFinal(sucursales,sucursal);
        }
    }
    archivo.close();

    destruir(sucursal);
}
