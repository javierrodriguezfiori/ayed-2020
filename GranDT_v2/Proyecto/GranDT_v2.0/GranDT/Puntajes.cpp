#include "Puntajes.h"

/*PRE:
    La instancia del TDA (puntajes) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (puntajes) listo para ser usado. El valor por defecto es 0
ATRIBUTOS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Puntajes & puntajes){
puntajes.id=0;
puntajes.fecha=0;
puntajes.puntos=0;

}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de ide al id del club de la  instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    id: valor utilizado para asignar a la instancia de puntajes.
RETORNO:
    No aplica.
*/

void setId(Puntajes & puntajes, int id){
puntajes.id=id;
}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de fecha al atributo fecha de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    fecha: valor utilizado para asignar a la instancia de puntajes
RETORNO:
    No aplica.
*/

void setFecha(Puntajes & puntajes , int fecha){
puntajes.fecha=fecha;
}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de puntos de la  instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    puntos: valor utilizado para asignar a la instancia de puntajes.
RETORNO:
    No aplica.
*/

void setPuntos(Puntajes & puntajes, float puntos){
puntajes.puntos=puntos;
}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el valor del id de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    valor del id en formato entero
*/

int getId(Puntajes & puntajes){
return puntajes.id;
}

/*
PRE:
    La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el nombre  de la instancia clubes
PARAMETROS:
    clubes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    nombre del club en formato string
*/

int getFecha(Puntajes & puntajes){
return puntajes.fecha;
}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el valor de los puntos de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    valor de los puntos en formato entero
*/

float getPuntos(Puntajes & puntajes){
return puntajes.puntos;
}

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/

void destruir(Puntajes & puntajes){
}

