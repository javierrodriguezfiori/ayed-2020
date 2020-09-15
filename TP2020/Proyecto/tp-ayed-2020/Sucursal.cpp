#include "Sucursal.h"

// Constructor y destructor

void crear(Sucursal &sucursal){
}

void destruir(Sucursal &sucursal){
}

// Setters

void setId(Sucursal &sucursal, int id){
    sucursal.id= id;
}

void setProvincia(Sucursal &sucursal, string provincia){
    sucursal.provincia = provincia;
}

void setArticulos(Sucursal &sucursal, int articulos){
    sucursal.articulos = articulos;
}

void setFacturacion(Sucursal &sucursal, float facturacion){
    sucursal.facturacion = facturacion;
}

void setMetros(Sucursal &sucursal, float metros){
    sucursal.metros = metros;
}

void setCasaMatriz(Sucursal &sucursal, int casaMatriz){
    sucursal.casaMatriz = casaMatriz;
}

// Getters

int getId(Sucursal &sucursal){
    return sucursal.id;
}

string getProvincia(Sucursal &sucursal){
    return sucursal.provincia;
}

int getArticulos(Sucursal &sucursal){
    return sucursal.articulos;
}

float getFacturacion(Sucursal &sucursal){
    return sucursal.facturacion;
}

float getMetros(Sucursal &sucursal){
    return sucursal.metros;
}

int getCasaMatriz(Sucursal &sucursal){
    return sucursal.casaMatriz;
}


