#include <iostream>
#include "Circulo.h"
#include "Cilindro.h"

using namespace std;

/**
1) Diseñar la especificación e implementar un TDA que represente un Círculo con las siguientes
características: radio, diámetro, perímetro, superficie.

2) A partir del TDA Círculo, diseñar la especificación e implementar el TDA Cilindro con las
siguientes características: radio de la base, perímetro de la base, superficie de la base, altura,
volumen, superficie lateral.
*/

int main()
{
    std::setlocale(LC_ALL, "spanish");

    Circulo circulo;
    setColor(circulo,"Rojo");
    cout << "Circulo: " << endl;
    constructor(circulo);
    cout << "Radio: " << getRadio(circulo) << endl;
    cout << "Diámetro: " << getDiametro(circulo) << endl;
    cout << "Perímetro: " << getPerimetro(circulo) << endl;
    cout << "Superficie: " << getSuperficie(circulo) << endl;
    cout << "Color: " << getColor(circulo) << endl;
    destructor(circulo);
    cout << endl;
    Cilindro cilindro;
    cout << "Cilindro: " << endl;
    constructor(cilindro);
    setBase(cilindro,circulo);
    cout << "Radio: " << getRadio(cilindro) << endl;
    cout << "Diámetro: " << getDiametro(cilindro) << endl;
    cout << "Perímetro: " << getPerimetro(cilindro) << endl;
    cout << "Superficie Base: " << getSuperficieBase(cilindro) << endl;
    cout << "Superficie: " << getSuperficie(cilindro) << endl;
    cout << "Volúmen: " << getVolumen(cilindro) << endl;
    cout << "Color: " << getColor(cilindro) << endl;
    destructor(cilindro);

    return 0;
}
