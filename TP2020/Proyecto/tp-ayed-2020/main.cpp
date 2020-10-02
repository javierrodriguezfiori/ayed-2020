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

// Declaraciones
void mostrar_lista(ListaSucursal &sucursales);
void leer_archivoDatos(ListaSucursal &sucursales);
void rankingFacturacion(ListaSucursal &sucursales);
void rankingFacturacionPorProvincia(ListaSucursal &sucursales);
void rankingArticulos(ListaSucursal &sucursales);
void rankingArticulosPorProvincia(ListaSucursal &sucursales);
void rankingRendimiento(ListaSucursal &sucursales);

int main()
{
    //Caracteres en español
    setlocale(LC_ALL,"Spanish");

    //Precision numerica de 2 decimales
    cout << fixed << setprecision(2);

    //Lista maestra
    ListaSucursal sucursales;
    crearLista(sucursales);

    //Lectura del archivo de datos
    leer_archivoDatos(sucursales);

    //Menu principal
    int opcion=8;

    while(opcion!=0){
        system("cls");
        cout << "Menú principal" << endl << endl << "1- Ranking por facturación" << endl << "2- Ranking por cantidad de artículos" << endl << "3- Ranking de rendimiento por m2" << endl << "4- Lista de sucursales" << endl << endl << "0- Salir" << endl << endl << "Ingrese una opción: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                //Ranking por facturación
                system("cls");
                cout << "Ranking de sucursales por facturación (nacional)" << endl << endl;
                rankingFacturacion(sucursales);
                cout << "Ranking de sucursales por facturación (por provincia): " << endl << endl;
                rankingFacturacionPorProvincia(sucursales);
                system("pause");
                break;
            case 2:
                //Ranking por cantidad de artículos
                system("cls");
                cout << "Ranking de sucursales por cantidad de artículos (nacional)" << endl << endl;
                rankingArticulos(sucursales);
                cout << "Ranking de sucursales por cantidad de artículos (por provincia): " << endl << endl;
                rankingArticulosPorProvincia(sucursales);
                system("pause");
                break;
            case 3:
                //Ranking de rendimiento por m2
                system("cls");
                cout << "Ranking de casas matrices por rendimiento (facturación/m2)" << endl << endl;
                rankingRendimiento(sucursales);
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
        cout << endl << "ERROR!: No se pudo abrir el archivo" << endl;
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
        cout << "Id: " << getId(sucursal) << ", "
        << "Provincia: " << getProvincia(sucursal) << ", "
        << "Artículos: " << getArticulos(sucursal) << ", "
        << "Facturación: " << getFacturacion(sucursal) << ", "
        << "Metros: " << getMetros(sucursal) << ", "
        << "Casa matriz: " << getCasaMatriz(sucursal) << ", "
        << endl;
        cursor=siguiente(sucursales,cursor);
    }

    cout << endl;

    destruir(sucursal);
}

void rankingFacturacion(ListaSucursal &sucursales){
    ListaSucursal listaTemporal;
    crearLista(listaTemporal);
    listaTemporal = copiarLista(sucursales);
    reordenar(listaTemporal,"facturacion");
    mostrar_lista(listaTemporal);
    eliminarLista(listaTemporal);
}

void rankingFacturacionPorProvincia(ListaSucursal &sucursales){
    // Puntero cursor para moverme por las listas
    PtrNodoListaSucursal cursor;
    // Sucursal temporal para guardar datos
    Sucursal sucursal;
    crear(sucursal);
    // String para comparar provincias
    string provincia = "";
    // float para total por provincia
    float facturacionTotal = 0;
    // Lista madre duplicada de la original
    ListaSucursal lista;
    crearLista(lista);
    lista = copiarLista(sucursales);

    // Mientras la lista madre no este vacía
    while(!listaVacia(lista)){
        // Tomo como referencia de provincia el primer item de la lista
        cursor = primero(lista);
        obtenerDato(lista, sucursal, cursor);
        provincia = getProvincia(sucursal);
        // Creo la lista temporal para la provincia
        ListaSucursal listaProvincia;
        crearLista(listaProvincia);
        // Recorro la lista temporal
        while(cursor!=finLista()){
            // Traigo el dato
            obtenerDato(lista, sucursal, cursor);
            // Comparo la provincia del dato con la de referencia
            if(getProvincia(sucursal)==provincia){
                // Agrego la sucursal a la sublista de la provincia
                adicionarFinal(listaProvincia, sucursal);
                facturacionTotal = facturacionTotal + getFacturacion(sucursal);
                // Elimino el nodo para ir limpiando la lista madre
                eliminarNodo(lista, cursor);
            }
            // Paso al siguiente nodo
            cursor=siguiente(lista, cursor);
        }
        // Muestro la facturacion total en la provincia
        cout <<"Facturacion total (Provincia: " << provincia << "): " << facturacionTotal << endl;
        facturacionTotal=0;
        // Muestro la lista temporal de la provincia
        reordenar(listaProvincia,"facturacion");
        mostrar_lista(listaProvincia);
        // Elimino la lista para volver a empezar hasta que se vacie la lista madre
        eliminarLista(listaProvincia);
    }
}

void rankingArticulos(ListaSucursal &sucursales){
    ListaSucursal listaTemporal;
    crearLista(listaTemporal);
    listaTemporal = copiarLista(sucursales);
    reordenar(listaTemporal,"articulos");
    mostrar_lista(listaTemporal);
    eliminarLista(listaTemporal);
}

void rankingArticulosPorProvincia(ListaSucursal &sucursales){
    // Puntero cursor para moverme por las listas
    PtrNodoListaSucursal cursor;
    // Sucursal temporal para guardar datos
    Sucursal sucursal;
    crear(sucursal);
    // String para comparar provincias
    string provincia = "";
    // Lista madre duplicada de la original
    ListaSucursal lista;
    crearLista(lista);
    lista = copiarLista(sucursales);

    // Mientras la lista madre no este vacía
    while(!listaVacia(lista)){
        // Tomo como referencia de provincia el primer item de la lista
        cursor = primero(lista);
        obtenerDato(lista, sucursal, cursor);
        provincia = getProvincia(sucursal);
        // Creo la lista temporal para la provincia
        ListaSucursal listaProvincia;
        crearLista(listaProvincia);
        // Recorro la lista temporal
        while(cursor!=finLista()){
            // Traigo el dato
            obtenerDato(lista, sucursal, cursor);
            // Comparo la provincia del dato con la de referencia
            if(getProvincia(sucursal)==provincia){
                // Agrego la sucursal a la sublista de la provincia
                adicionarFinal(listaProvincia, sucursal);
                // Elimino el nodo para ir limpiando la lista madre
                eliminarNodo(lista, cursor);
            }
            // Paso al siguiente nodo
            cursor=siguiente(lista, cursor);
        }
        cout <<"Provincia: " << provincia << endl;
        // Muestro la lista temporal de la provincia
        reordenar(listaProvincia,"articulos");
        mostrar_lista(listaProvincia);
        // Elimino la lista para volver a empezar hasta que se vacie la lista madre
        eliminarLista(listaProvincia);
    }
}

void rankingRendimiento(ListaSucursal &sucursales){
    // Puntero cursor para moverme por las listas
    PtrNodoListaSucursal cursor;
    cursor = primero(sucursales);
    PtrNodoListaSucursal cursorMatrices;
    // Sucursal temporal para guardar datos
    Sucursal sucursal;
    crear(sucursal);

    // Genero sublista de casas Matrices
    int casaMatriz;
    ListaSucursal listaMatrices;
    crearLista(listaMatrices);
    while(cursor != finLista()){
        obtenerDato(sucursales, sucursal, cursor);
        casaMatriz = getCasaMatriz(sucursal);
        if(casaMatriz==0){
            adicionarFinal(listaMatrices,sucursal);
        }
        cursor = siguiente(sucursales,cursor);
    }

    // Recorro la lista original buscando para sumar a las casa matrices
    cursorMatrices = primero(listaMatrices);
    Sucursal matriz;
    crear(matriz);
    while(cursorMatrices != finLista()){
        obtenerDato(listaMatrices, matriz, cursorMatrices);
//        cout << "Casa matriz Id: " << getId(matriz) << endl;
        cursor = primero(sucursales);
        while(cursor != finLista()){
            obtenerDato(sucursales, sucursal, cursor);
            if (getCasaMatriz(sucursal)==getId(matriz)){
//                cout << "Facturacion original: " << getFacturacion(matriz) << endl;
                setFacturacion(matriz, getFacturacion(matriz)+getFacturacion(sucursal));
                setMetros(matriz, getMetros(matriz)+getMetros(sucursal));
                colocarDato(listaMatrices, matriz, cursorMatrices);
//                cout << "Facturacion nueva: " << getFacturacion(matriz) << endl;
            }
            cursor = siguiente(sucursales,cursor);
        }
        setRendimiento(matriz, getFacturacion(matriz)/getMetros(matriz));
        colocarDato(listaMatrices, matriz, cursorMatrices);
        cursorMatrices = siguiente(listaMatrices, cursorMatrices);
    }
    reordenar(listaMatrices,"rendimiento");

    // Mostrar sucursales con rendimiento
    cursor = primero(listaMatrices);
    while(cursor!=finLista()){
        obtenerDato(sucursales,sucursal,cursor);
        //IMPRIMIR DATO
        cout << "Id: " << getId(sucursal) << ", "
        << "Provincia: " << getProvincia(sucursal) << ", "
        << "Artículos: " << getArticulos(sucursal) << ", "
        << "Facturación: " << getFacturacion(sucursal) << ", "
        << "Metros: " << getMetros(sucursal) << ", "
        << "Casa matriz: " << getCasaMatriz(sucursal) << ", "
        << "Rendimiento: " << getRendimiento(sucursal)
        << endl;
        cursor=siguiente(sucursales,cursor);
    }
    cout << endl;
    destruir(sucursal);
    eliminarLista(listaMatrices);
}
