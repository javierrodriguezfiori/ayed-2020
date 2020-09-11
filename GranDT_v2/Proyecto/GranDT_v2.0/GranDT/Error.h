#ifndef _ERROR_H
#define _ERROR_H
#include <string>
using namespace std;

/**
Definición del tipo de datos para manejo de errores
ATRIVUTOS:
CodigoError,
Descripcion,
AXIOMAS:
=<CodigoError<=
*/

/**
Definición del tipo
*/
typedef struct{
 int CodigoError;
 string Descripcion;

}Error;

/**
PRE: La instancia del TDA(error) no debe haber sido creada ni destruida con anterioridad.
POST:Deja al TDA(error) listo para ser utilizado, con las variables por defecto:
CodigoError=1
Descripcion=" "
Atrivutos:errorInstancia a la cual se aplica la primitiva.
RETORNO:No aplica.
*/
void crear(Error &error);
/**
PRE: La instancia del TDA(error) debe haber sido creada y no destruida con anterioridad.
POST:Destruye la instancia del TDA(error) y no podra ser utilizada.
Atrivutos:error:Instancia a la cual se aplica la primitiva.
RETORNO:No aplica.
*/
void destruir(Error &error);
/**
PRE: La instancia del TDA(error) debe haber sido creada y no destruida con anterioridad.
El codigo de error debe ser entre 1 y 7;
POST:Le asigna el nuevo CodigoError al error.
Atrivutos:error:Instancia a la cual se aplica la primitiva.
CodigoError: Valor del codigo de error
RETORNO:No aplica.
*/
void setCodigoError(Error &error,int CodigoError);
/**
PRE: La instancia del TDA(error) debe haber sido creada y no destruida con anterioridad.
El codigo de error debe ser entre 1 y 7;
POST:Le asigna la nueva descripción al error.
Atrivutos:error:Instancia a la cual se aplica la primitiva.
Descripcion: Valor de la descripcion de error
RETORNO:No aplica.
*/


void SetDescripcion(Error &error,int CodigoError);
/**
PRE: La instancia del TDA(error) debe haber sido creada y no destruida con anterioridad.

POST:Devuelve el codigo de error de la instancia del TDA(error),
Atrivutos:error:Instancia a la cual se aplica la primitiva.

RETORNO:Devuelve el codigo de error.
*/
int getCodigoError(Error &error);
/**
PRE: La instancia del TDA(error) debe haber sido creada y no destruida con anterioridad.

POST:Devuelve la descripción de la instancia del TDA(error),
Atrivutos:error:Instancia a la cual se aplica la primitiva.

RETORNO:Devuelve la descripción de error.
*/
std::string getDescripcion(Error &error);

#endif // _ERROR_H
