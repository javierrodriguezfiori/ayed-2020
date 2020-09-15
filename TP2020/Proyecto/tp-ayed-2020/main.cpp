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

void mostrar_lista(ListaSucursal &sucursales);
void leer_archivoDatos(ListaSucursal &sucursales);

int main()
{
    //CARACTERES SPANISH
    setlocale(LC_ALL,"Spanish");

    //LISTAS
    ListaSucursal sucursales;
    crearLista(sucursales);

    //CARGA ARCHIVO
    leer_archivoDatos(sucursales);

    //MENU PRINCIPAL
    int opcion=8;

    while(opcion!=0){
        system("cls");
        cout << "Menú principal" << endl << endl << "1- Ranking por facturación" << endl << "2- Ranking por cantidad de artículos" << endl << "3- Ranking de rendimiento por m2" << endl << "4- Lista de sucursales" << endl << endl << "0- Salir" << endl << endl << "Ingrese una opción: ";
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
            case 4:
                //Mostrar lista de sucursales
                system("cls");
                cout << "Lista de sucursales" << endl << endl;
                mostrar_lista(sucursales);
                system("pause");
                break;
            default:
                break;
        }
    }

    //FIN
    return 0;
}

void leer_archivoDatos(ListaSucursal &sucursales){
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
            adicionarFinal(sucursales,sucursal);
        }
    }
    archivo.close();
    destruir(sucursal);
}

void mostrar_lista(ListaSucursal &sucursales){
    PtrNodoListaSucursal cursor;
    cursor=primero(sucursales);
    Sucursal sucursal;
    crear(sucursal);

    while(cursor!=finLista()){
        obtenerDato(sucursales,sucursal,cursor);
        //IMPRIMIR DATO
        cout << getId(sucursal) << "," << getProvincia(sucursal) << "," << getArticulos(sucursal) << "," << getFacturacion(sucursal)<< "," << getMetros(sucursal) << "," << getCasaMatriz(sucursal) << endl;
        cursor=siguiente(sucursales,cursor);
    }
    cout << endl;
    destruir(sucursal);
}
