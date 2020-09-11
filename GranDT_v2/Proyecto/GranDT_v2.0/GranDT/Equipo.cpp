#include "Equipo.h"


/*PRE:
    La instancia del TDA (equipo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (equipo) listo para ser usado. El valor por defecto es 0,nombre"".
ATRIBUTOS:
    equipo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
    */

void crear(Equipo &equipo){
    equipo.id=0;
    equipo.nombreequipo="";
    equipo.nombreusuario="";
    crearListaJugador(equipo.listaarqueros);
    crearListaJugador(equipo.listadefensores);
    crearListaJugador(equipo.listamedios);
    crearListaJugador(equipo.listadelanteros);
}

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

void destruir(Equipo &equipo){
}

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

void setID(Equipo &equipo,int n){
    equipo.id=n;
}

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

int getID(Equipo &equipo){
    return equipo.id;
}

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

void setNombreEquipo(Equipo &equipo,std::string nombre){
    equipo.nombreequipo=nombre;
}

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

std::string getNombreEquipo(Equipo &equipo){
    return equipo.nombreequipo;
}

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

void setNombreUsuario(Equipo &equipo,std::string nombre){
    equipo.nombreusuario=nombre;
}

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

std::string getNombreUsuario(Equipo &equipo){
    return equipo.nombreusuario;
}

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de arqueros del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      arqueros:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaArqueros(Equipo &equipo,ListaJugador &arqueros){
    equipo.listaarqueros=arqueros;
}

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de defensores del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      defensores:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaDefensores(Equipo &equipo,ListaJugador &defensores){
    equipo.listadefensores=defensores;
}

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de mediocampistas del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      mediocampistas:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaMediocampistas(Equipo &equipo,ListaJugador &mediocampistas){
    equipo.listamedios=mediocampistas;
}

/*PRE:
      La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
      Asigna datos de tipo jugador a la lista de delanteros del equipo correspondiente.
ATRIBUTOS:
	  equipo:instancia sobre la cual se aplica la primitiva
      delanteros:instancia de lista jugador la cual se asigna al equipo correspondiente.
RETORNO:
	  No aplica.*/

void setListaDelanteros(Equipo &equipo,ListaJugador &delanteros){
    equipo.listadelanteros=delanteros;
}

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de arqueros del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de arqueros del equipo.*/

ListaJugador getListaArqueros(Equipo &equipo){
    return equipo.listaarqueros;
}

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de defensores del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de defensores del equipo.*/

ListaJugador getListaDefensores(Equipo &equipo){
    return equipo.listadefensores;
}

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de mediocampistas del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de mediocampistas del equipo.*/

ListaJugador getListaMediocampistas(Equipo &equipo){
    return equipo.listamedios;
}

/*PRE:
     La instancia del TDA (equipo) debe haberse creado con anterioridad (primitiva crear) y nunca se ejecutó la primitiva destruir sobre esta instancia.
POST:
     Devuelve la lista de delanteros del equipo.
ATRIBUTOS:
     equipo:instancia sobre la cual se aplica la primitiva

RETORNO:
	 devuelve la referencia a la lista de delanteros del equipo.*/

ListaJugador getListaDelanteros(Equipo &equipo){
    return equipo.listadelanteros;
}
