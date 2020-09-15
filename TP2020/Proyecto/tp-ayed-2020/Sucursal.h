#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED

#include <string>

using namespace std;

// Estructura
typedef struct  {
    int id;
    string provincia;
    int articulos;
    float facturacion;
    float metros;
    int casaMatriz;
} Sucursal;

// Constructor y destructor
void crear(Sucursal &sucursal);
void destruir(Sucursal &sucursal);

// Setters
void setId(Sucursal &sucursal, int id);
void setProvincia(Sucursal &sucursal, string provincia);
void setArticulos(Sucursal &sucursal, int articulos);
void setFacturacion(Sucursal &sucursal, float facturacion);
void setMetros(Sucursal &sucursal, float metros);
void setCasaMatriz(Sucursal &sucursal, int casaMatriz);

// Getters
int getId(Sucursal &sucursal);
string getProvincia(Sucursal &sucursal);
int getArticulos(Sucursal &sucursal);
float getFacturacion(Sucursal &sucursal);
float getMetros(Sucursal &sucursal);
int getCasaMatriz(Sucursal &sucursal);

#endif // SUCURSAL_H_INCLUDED
