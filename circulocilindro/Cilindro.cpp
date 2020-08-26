#include "Cilindro.h"

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
void constructor(Cilindro &cilindro){
    // Llamo al constructor del otro TDA.
    // En la pre no digo nada del circulo porque es implementación (o sea, es algo interno mío).
    constructor(cilindro.base);

    // Inicializo la altura.
    cilindro.altura = 1;
}

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
void destructor(Cilindro &cilindro){
    // Llamo al destructor de la base
    destructor(cilindro.base);
}

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
void setRadio(Cilindro &cilindro, float radio){
    setRadio(getBase(cilindro), radio);
}

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
float getRadio(Cilindro &cilindro){
    return getRadio(getBase(cilindro));
}

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
void setAltura(Cilindro &cilindro, float altura){
    if (altura > 0)
        cilindro.altura = altura;
}

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
float getAltura(Cilindro &cilindro){
    return cilindro.altura;
}

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
float getPerimetro(Cilindro &cilindro){
    return getPerimetro(getBase(cilindro));
}

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
float getSuperficieBase(Cilindro &cilindro){
    return getSuperficie(getBase(cilindro));
}

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
float getSuperficie(Cilindro &cilindro){
    return getPerimetro(cilindro)*getAltura(cilindro)+getSuperficieBase(cilindro)*2;
}

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
float getVolumen(Cilindro &cilindro){
    return getSuperficie(getBase(cilindro))*getAltura(cilindro);
}

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
string getColor(Cilindro &cilindro){
    return cilindro.base.color;
}

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
float getDiametro(Cilindro &cilindro){
    return getDiametro(getBase(cilindro));
}

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
Circulo& getBase(Cilindro &cilindro){
    return cilindro.base;
}

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
void setBase(Cilindro &cilindro, Circulo &circulo){
    cilindro.base = circulo;
}
