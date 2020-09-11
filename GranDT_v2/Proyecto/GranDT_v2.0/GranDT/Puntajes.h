#ifndef __PUNTAJES_H__
#define __PUNTAJES_H__


/*Definicion del TDA Puntajes*/
typedef struct
{
    int id;
    int fecha;
    float puntos;
}Puntajes;


/*PRE:
    La instancia del TDA (puntajes) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (puntajes) listo para ser usado. El valor por defecto es 0
ATRIBUTOS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Puntajes & puntajes);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de id a la  instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    id: valor utilizado para asignar a la instancia de puntajes.
RETORNO:
    No aplica.
*/

void setId(Puntajes & puntajes , int id);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de fecha al atributo fecha de la instancia  puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    fecha: valor utilizado para asignar a la instancia de puntajes.
RETORNO:
    No aplica.
*/

void setFecha(Puntajes & puntajes , int fecha);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de puntos correspondientes a la  instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
    puntos: valor utilizado para asignar a la instancia de puntajes.
RETORNO:
    No aplica.
*/

void setPuntos(Puntajes & puntajes , float puntos);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el valor del id de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.

RETORNO:
    no aplica.
*/

int getId(Puntajes & puntajes);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve la fecha  de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    fecha de la instancia de puntajes
*/

int getFecha(Puntajes & puntajes);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear) y
     nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el valor de los puntos de la instancia puntajes
PARAMETROS:
    puntajes: instancia sobre la cual se aplica la primitiva.

RETORNO:
    no aplica.
*/

float getPuntos(Puntajes & puntajes);

/*
PRE:
    La instancia del TDA (puntajes) debe haberse creado con anterioridad (primitiva crear)
     y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    puntajes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/

void destruir(Puntajes & puntajes);

#endif // PUNTAJES_H_INCLUDED
