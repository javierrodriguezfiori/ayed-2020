#include <cstring>
#ifndef __CLUB_H__
#define __CLUB_H__
#include "ListaJugador.h"

/*Definicion del TDA Club*/

typedef struct{
int id;
string nombre;
ListaJugador listajugador;
}Clubes;

/*PRE:
    La instancia del TDA (clubes) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (Clubes) listo para ser usado. El valor por defecto es 0,nombre
ATRIBUTOS:
    clubes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Clubes&clubes);

/*
PRE:
    La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de ide al id del club de la  instancia clubes
PARAMETROS:
    clubes: instancia sobre la cual se aplica la primitiva.
    ide: valor utilizado para asignar a la instancia de clubes.
RETORNO:
    No aplica.
*/

void setId(Clubes&clubes,int ide);

/*
PRE:
    La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de nom al atributo nombre de la instancia  clubes
PARAMETROS:
    clubes: instancia sobre la cual se aplica la primitiva.
    nom: valor utilizado para asignar a la instancia de clubes
RETORNO:
    No aplica.
*/

void setNombre(Clubes&clubes,string nombre);

/*
PRE:
    La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el valor del id de la instancia clubes
PARAMETROS:
    clubes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    valor del id del club en formato entero
*/

void setListaJugadores(Clubes&clubes,ListaJugador jugadores);

int getId(Clubes&clubes);

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

string getNombre(Clubes&clubes);

/*
PRE:
    La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    nimagin: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/

void destruir(Clubes&clubes);

/*PRE:
      La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de jugadores
ATRIBUTOS:
	  listajugador:instancia sobre la cual se aplica la primitiva

RETORNO:
	devuelve la referencia a la listajugadores*/


ListaJugador getLista(Clubes &clubes);




#endif

