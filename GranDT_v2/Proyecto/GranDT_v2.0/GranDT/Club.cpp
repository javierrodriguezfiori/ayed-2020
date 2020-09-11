
#include "Club.h"

/*PRE:
    La instancia del TDA (clubes) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (Clubes) listo para ser usado. El valor por defecto es 0,nombre
ATRIBUTOS:
    clubes: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Clubes&clubes){
clubes.id=0;
clubes.nombre="";
crearListaJugador(clubes.listajugador);

}

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

void setId(Clubes&clubes,int ide){
clubes.id=ide;
}

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

void setNombre(Clubes&clubes,string nombre){
    clubes.nombre=nombre;
}

void setListaJugadores(Clubes&clubes,ListaJugador jugadores){
    clubes.listajugador=jugadores;
}

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

int getId(Clubes &clubes){
    return clubes.id;
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

string getNombre(Clubes&clubes){
return clubes.nombre;
}

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

void destruir(Clubes&clubes){
}

/*PRE:
      La instancia del TDA (clubes) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de jugadores
ATRIBUTOS:
	  listajugador:instancia sobre la cual se aplica la primitiva

RETORNO:
	devuelve la referencia a la listajugadores*/


ListaJugador getLista(Clubes &clubes){
    return clubes.listajugador;
}

