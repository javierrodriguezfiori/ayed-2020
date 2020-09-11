#ifndef EQUIPOS_H_INCLUDED
#define EQUIPOS_H_INCLUDED
#include "ListaJugador.h"
#include <string>


/*Definicion del TDA Equipo*/
typedef struct
{
    int id;
    std::string nombreequipo;
    std::string nombreusuario;
    ListaJugador listaarqueros;
    ListaJugador listadefensores;
    ListaJugador listamedios;
    ListaJugador listadelanteros;
}Equipo;


/*PRE:
    La instancia del TDA (equipo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (equipo) listo para ser usado. El valor por defecto es 0,nombre"".
ATRIBUTOS:
    equipo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Equipo &equipo);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    equipo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/

void destruir(Equipo &equipo);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de n al id del club de la  instancia equipo.
PARAMETROS:
    equipo: instancia sobre la cual se aplica la primitiva.
    n: valor utilizado para asignar a la instancia de equipo.
RETORNO:
    No aplica.
*/

void setID(Equipo &equipo, int n);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el valor del atributo id del equipo.
ATRIBUTOS:
    equipo: instancia de Equipo de la cual traer el id.
RETORNO:
    Devuelve el valor del atributo id (int) del equipo.
*/

int getID(Equipo &equipo);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de nombre al atributo nombre de la instancia equipo.
PARAMETROS:
    equipo: instancia sobre la cual se aplica la primitiva.
    nombre: valor utilizado para asignar a la instancia de equipo.
RETORNO:
    No aplica.
*/

void setNombreEquipo(Equipo &equipo,std::string nombre);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el nombre  de la instancia equipo
PARAMETROS:
    equipo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    nombre del equipo en formato string.
*/

std::string getNombreEquipo(Equipo &equipo);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    Asigna el valor de nombre al atributo usuario de la instancia equipo.
PARAMETROS:
    equipo: instancia sobre la cual se aplica la primitiva.
    nombre: valor utilizado para asignar a la instancia de equipo.
RETORNO:
    No aplica.
*/

void setNombreUsuario(Equipo &equipo,std::string nombre);

/*
PRE:
    La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
    devuelve el usuario de la instancia equipo
PARAMETROS:
    equipo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    usuario del equipo en formato string.
*/

std::string getNombreUsuario(Equipo &equipo);

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de arqueros del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      arqueros:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaArqueros(Equipo &equipo,ListaJugador &arqueros);

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de defensores del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      defensores:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaDefensores(Equipo &equipo,ListaJugador &defensores);

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de mediocampistas del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      mediocampistas:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaMediocampistas(Equipo &equipo,ListaJugador &mediocampistas);

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de delanteros del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      delanteros:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaDelanteros(Equipo &equipo,ListaJugador &delanteros);

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de arqueros del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de arqueros del equipo.*/

ListaJugador getListaArqueros(Equipo &equipo);

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de defensores del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de defensores del equipo.*/

ListaJugador getListaDefensores(Equipo &equipo);

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de mediocampistas del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de mediocampistas del equipo.*/

ListaJugador getListaMediocampistas(Equipo &equipo);

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de delanteros del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de delanteros del equipo.*/

ListaJugador getListaDelanteros(Equipo &equipo);

#endif // EQUIPOS_H_INCLUDED
