#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "Constantes.h"
#include <string>

using namespace std;

/**
    Definición del Tipo de Dato para manejo de Circulos.
    Atributos:
    * radio,
    * diámetro,
    * perímetro,
    * superficie.

    Axiomas:
    * radio > 0
    * diametro = 2*radio
    * perímetro = 2*pi*radio
    * superficie = pi*radio*radio
*/

/**
    Definición del Tipo.

*/
typedef struct  {
    float radio;
    string color;
} Circulo;

/**
PRE:
    La instancia del TDA (circulo) no debe haberse creado (crear) ni destruido (destruir) con anterioridad.
POST:
    Deja la instancia del TDA (circulo) listo para ser usado. El valor por defecto del radio es 1.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void constructor(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Destruye la instancia del TDA y ya no podrá ser utilizada.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    No aplica.
*/
void destructor(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
    El radio debe ser mayor a cero.
POST:
    El circulo queda con el nuevo radio.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
    radio: valor del radio a asignar al circulo.
RETORNO:
    No aplica.
*/
void setRadio(Circulo &circulo, float radio);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el radio del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el radio del círculo.
*/
float getRadio(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    El circulo queda con el nuevo color.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
    color: valor del color a asignar al circulo.
RETORNO:
    No aplica.
*/
void setColor(Circulo &circulo, string color);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el color del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el color del círculo.
*/
string getColor(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el perímetro del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el perímetro del círculo.
*/
float getPerimetro(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve la superficie del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve la superficie del circulo.
*/
float getSuperficie(Circulo &circulo);

/**
PRE:
    La instancia del TDA (circulo) debe haberse creado (crear) pero no debe estar destruida (destruir).
POST:
    Devuelve el diámetro del circulo.
ATRIBUTOS:
    circulo: instancia sobre la cual se aplica la primitiva.
RETORNO:
    Devuelve el diámetro del circulo.
*/
float getDiametro(Circulo &circulo);

#endif // CIRCULO_H_INCLUDED
