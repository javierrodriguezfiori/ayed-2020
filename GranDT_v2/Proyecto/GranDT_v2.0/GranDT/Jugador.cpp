#include "Jugador.h"

/** Constructor
PRE:
    La instancia del TDA (Jugador) no debe haberse creado (constructor) ni destruido (destructor) con anterioridad.
POST:
    Deja la instancia del TDA (Jugador) listo para ser usado. Sin valores por defecto.
ATRIBUTOS:
    jugador: instancia de Jugador a crear.
RETORNO:
    No aplica.
*/
void constructor(Jugador &jugador){
}

/** Destructor
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Destruye la instancia del TDA Jugador y ya no podrá ser utilizada.
ATRIBUTOS:
    jugador: instancia de Jugador a destruir.
RETORNO:
    No aplica.
*/
void destructor(Jugador &jugador){
}

/** Setter atributo id (int)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    El atributo id de la instancia del TDA queda seteada con el valor provisto.
ATRIBUTOS:
    jugador: instancia de Jugador a modificar.
    id: valor de id a asignar al jugador.
RETORNO:
    No aplica.
*/
void setId(Jugador &jugador, int id){
    jugador.id= id;
}

/** Setter atributo nombre (string)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    El atributo nombre de la instancia del TDA queda seteada con el valor provisto.
ATRIBUTOS:
    jugador: instancia de Jugador a modificar.
    nombre: valor de nombre a asignar al jugador.
RETORNO:
    No aplica.
*/
void setNombre(Jugador &jugador, string nombre){
    jugador.nombre= nombre;
}

/** Setter atributo posicion (int)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    El atributo nombre de la instancia del TDA queda seteada con el valor provisto.
ATRIBUTOS:
    jugador: instancia de Jugador a modificar.
    posicion: valor de posicion a asignar al jugador.
RETORNO:
    No aplica.
*/

/** Setter atributo nombre (int)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    El atributo club de la instancia del TDA queda seteada con el valor provisto.
ATRIBUTOS:
    jugador: instancia de Jugador a modificar.
    club: valor de club a asignar al jugador.
RETORNO:
    No aplica.
*/
void setClub(Jugador &jugador, int club){
    jugador.club=club;
}

void setPosicion(Jugador &jugador, Posicion posicion){
    jugador.posicion= posicion;
}

/** Setter atributo valor (float)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    El atributo valor de la instancia del TDA queda seteada con el valor provisto.
ATRIBUTOS:
    jugador: instancia de Jugador a modificar.
    valor: valor de valor a asignar al jugador.
RETORNO:
    No aplica.
*/
void setValor(Jugador &jugador, float valor){
    jugador.valor=valor;
}

/** Getter atributo id
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Devuelve el valor del atributo id del Jugador.
ATRIBUTOS:
    jugador: instancia de Jugador de la cual traer el id.
RETORNO:
    Devuelve el valor del atributo id (int) del Jugador.
*/
int getId(Jugador &jugador){
    return jugador.id;
}

/** Getter atributo nombre (char*)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Devuelve el valor del atributo nombre del Jugador.
ATRIBUTOS:
    jugador: instancia de Jugador de la cual traer el nombre.
RETORNO:
    Devuelve el valor del atributo nombre del Jugador.
*/
string getNombre(Jugador &jugador){
    return jugador.nombre;
}

/** Getter atributo club
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Devuelve el valor del atributo club del Jugador.
ATRIBUTOS:
    jugador: instancia de Jugador de la cual traer el club.
RETORNO:
    Devuelve el valor del atributo club (int) del Jugador.
*/
int getClub(Jugador &jugador){
    return jugador.club;
}

/** Getter atributo posicion (int)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Devuelve el valor del atributo posicion del Jugador.
ATRIBUTOS:
    jugador: instancia de Jugador de la cual traer la posicion.
RETORNO:
    Devuelve el valor del atributo posicion del Jugador.
*/
Posicion getPosicion(Jugador &jugador){
    return jugador.posicion;
}

/** Getter atributo valor (float)
PRE:
    La instancia del TDA (Jugador) debe haberse creado (constructor) pero no debe estar destruida (destructor).
POST:
    Devuelve el valor del atributo valor del Jugador.
ATRIBUTOS:
    jugador: instancia de Jugador de la cual traer el valor.
RETORNO:
    Devuelve el valor del atributo valor del Jugador.
*/
float getValor(Jugador &jugador){
    return jugador.valor;
}

