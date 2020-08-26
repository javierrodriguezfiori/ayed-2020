#ifndef CILINDRO_H_INCLUDED
#define CILINDRO_H_INCLUDED

#include "Constantes.h"
#include "Circulo.h"

/**
    Definición del Tipo de Dato para manejo de Cilindros.
    Atributos:
    * radio de la base,
    * diámetro de la base,
    * perímetro de la base,
    * superficie de la base.
    * altura
    * superficie total.

    Axiomas:
    * radio > 0
    * diametroBase = 2*radio
    * perímetroBase = 2*pi*radio
    * superficieBase = pi*radio*radio
    * superficieTotal = superficieBase + superficie lateral.
    * volumen = superficiebase * altura
*/

/**
    Definición del Tipo.

*/
typedef struct  {
    float altura;
    Circulo base;
} Cilindro;

/**
PRE:
    La instancia del TDA (cilindro) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (cilindro) listo para ser usado. El valor por defecto del radio es 1 y la altura es 1.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void constructor(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void destructor(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El radio debe ser mayor a cero.
POST:
    El cilindro queda con el nuevo radio.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
    radio: valor del radio a asignar al cilindro.
RETORNO:
    No aplica.
*/
void setRadio(Cilindro &cilindro, float radio);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el radio del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el radio del cilindro.
*/
float getRadio(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La altura debe ser mayor a cero.
POST:
    El cilindro queda con la nueva altura.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
    altura: valor de la altura a asignar al cilindro.
RETORNO:
    No aplica.
*/
void setAltura(Cilindro &cilindro, float altura);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la altura del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la altura del cilindro.
*/
float getAltura(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el perímetro del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el perímetro del cilindro.
*/
float getPerimetro(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie de la base del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie de la base del cilindro.
*/
float getSuperficieBase(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie del cilindro.
*/
float getSuperficie(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el volúmen del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el volúmen del cilindro.
*/
float getVolumen(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el color del cilindro.
*/
string getColor(Cilindro &cilindro);

/**
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el diámetro del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el diámetro del cilindro.
*/
float getDiametro(Cilindro &cilindro);

/** INTERNA
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la base del cilindro.
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la base del del cilindro.
*/
Circulo& getBase(Cilindro &cilindro);

/** INTERNA
PRE:
    La instancia del TDA (cilindro) debe haberse creado (crear) pero no debe estar destruida (destruir).
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Se modifica la base del cilindro tomando la nueva base (circulo).
ATRIBUTOS:
    cilindro: instancia sobre la cual se aplica la primitiva.
    circulo: instancia de circulo que se tomará como base.
RETORNO:
    No Aplica.
*/
void setBase(Cilindro &cilindro, Circulo &circulo);

#endif // CILINDRO_H_INCLUDED
