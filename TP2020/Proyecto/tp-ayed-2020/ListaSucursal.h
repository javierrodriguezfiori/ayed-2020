#ifndef LISTASUCURSAL_H_INCLUDED
#define LISTASUCURSAL_H_INCLUDED

#include "Sucursal.h"

#ifndef NULL
#define NULL    0
#endif

enum ResultadoComparacion {
  MAYOR,
  IGUAL,
  MENOR
};

struct NodoListaSucursal {
    Sucursal dato;
    NodoListaSucursal* sgte;
};

/* Tipo de Puntero a los Nodos de la Lista, el cual se usa para recorrer
   la Lista y acceder a sus Datos. */
typedef NodoListaSucursal* PtrNodoListaSucursal;

/* Tipo de Estructura de la Lista */
struct ListaSucursal{
    PtrNodoListaSucursal primero; // puntero al primer nodo de la lista
};

/*
  pre: la lista no debe haber sido creada.
  post: lista queda creada y preparada para ser usada.
  lista: estructura de datos a ser creado.
*/
void crearLista(ListaSucursal &lista);

/*
  pre: lista creada con crearLista().
  post: Devuelve true si lista esta vacia, sino devuelve false.
  lista: lista sobre la cual se invoca la primitiva.
*/
bool listaVacia(ListaSucursal &lista);

/*
  pre: lista Creada con crearLista().
  post: devuelve la representacion de lo Siguiente al último Nodo de la lista,
        o sea el valor Null, que en esta implementacion representa el final de
        la lista.
  return: representación del finLista de la lista.
*/
PtrNodoListaSucursal finLista();

/*
  pre: lista Creada con crearLista().
  post: devuelve el puntero al primer elemento de la lista, o devuelve finLista() si
        esta vacia
  lista: lista sobre la cual se invoca la primitiva.
  return: puntero al primer nodo.
*/
PtrNodoListaSucursal primero(ListaSucursal &lista);

/*
  pre: lista Creada con crearLista().
  post: devuelve el puntero al nodo proximo del apuntado, o devuelve finLista si
        ptrNodo apuntaba a finLista() o si lista esta vacia.
  lista: lista sobre la cual se invoca la primitiva.
  prtNodo: puntero al nodo a partir del cual se requiere el siguiente.
  return puntero al nodo siguiente.
*/
PtrNodoListaSucursal siguiente(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista Creada con crearLista().
        ptrNodo es un puntero a un nodo de lista.
  post: devuelve el puntero al nodo anterior del apuntado, o devuelve finLista si ptrNodo apuntaba al primero o si lista esta vacia.
  lista: lista sobre la cual se invoca la primitiva.
  prtNodo: puntero al nodo a partir del cual se requiere el anterior.
  return: puntero al nodo anterior.
*/
PtrNodoListaSucursal anterior(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista().
  post: devuelve el puntero al ultimo nodo de la lista, o devuelve finLista() si
        lista esta vacia.
  lista: lista sobre la cual se invoca la primitiva.
  return: puntero al último nodo.
*/
PtrNodoListaSucursal ultimo(ListaSucursal &lista);

/*
  pre: lista creada con crearLista().
  post: agrega un nodo nuevo al principio de la lista con el dato proporcionado
        y devuelve un puntero a ese elemento.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a adicionar al principio de la lista.
  return puntero al nodo adicionado.
*/
PtrNodoListaSucursal adicionarPrincipio(ListaSucursal &lista, Sucursal dato);

/*
  pre: lista creada con crearLista().
  post: agrega un nodo despues del apuntado por ptrNodo con el dato
        proporcionado y devuelve un puntero apuntado al elemento insertado.
        Si la lista esta vacía agrega un nodo al principio de esta y devuelve
        un puntero al nodo insertado. Si ptrNodo apunta a finLista() no inserta
        nada y devuelve finLista().
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a adicionar.
  ptrNodo: puntero al nodo después del cual se quiere adicionar el dato.
  return: puntero al nodo adicionado.
*/
PtrNodoListaSucursal adicionarDespues(ListaSucursal &lista, Sucursal dato, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista().
  post: agrega un nodo al final de la lista con el dato proporcionado y devuelve
        un puntero al nodo insertado.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a adicionar al final de la lista.
  return: puntero al nodo adicionado.
*/
PtrNodoListaSucursal adicionarFinal(ListaSucursal &lista, Sucursal dato);

/*
  pre: lista creada con crearLista().
  post: agrega un nodo con el dato proporcionado antes del apuntado por ptrNodo
        y devuelve un puntero al nodo insertado. Si la lista esta vacia no
        inserta nada y devuelve finLista(). Si ptrNodo apunta al primero, el nodo
        insertado sera el nuevo primero.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a adicionar.
  ptrNodo: puntero al nodo antes del cual se quiere adicionar el dato.
  return: puntero al nodo adicionado.
*/
PtrNodoListaSucursal adicionarAntes(ListaSucursal &lista, Sucursal dato, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista(), no vacia. ptrNodo es distinto de finLista().
  post: coloca el dato proporcionado en el nodo apuntado por ptrNodo.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a colocar.
  ptrNodo: puntero al nodo del cual se quiere colocar el dato.
*/
void colocarDato(ListaSucursal &lista, Sucursal &dato, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista(), no vacia. ptrNodo es distinto de finLista().
  post: devuelve el dato del nodo apuntado por ptrNodo.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento obtenido.
  ptrNodo: puntero al nodo del cual se quiere obtener el dato.
*/
void obtenerDato(ListaSucursal &lista, Sucursal &dato, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista().
  post: elimina el nodo apuntado por ptrNodo. No realiza accion si la lista
        esta vacia o si ptrNodo apunta a finLista().
  lista: lista sobre la cual se invoca la primitiva.
  ptrNodo: puntero al nodo que se desea eliminar.
*/
void eliminarNodo(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo);

/*
  pre: lista creada con crearLista().
  post: si la lista no esta vacia, elimina su nodo primero, sino no realiza
        accion alguna.
  lista: lista sobre la cual se invoca la primitiva.
*/
void eliminarNodoPrimero(ListaSucursal &lista);

/*
  pre: lista creada con crearLista().
  post: si la lista no esta vacia elimina su nodo ultimo,
        sino no realiza accion.
  lista: lista sobre la cual se invoca la primitiva.
*/
void eliminarNodoUltimo(ListaSucursal &lista);

/*
  pre: lista creada con crearLista().
  post: elimina todos los Nodos de la lista quedando destruida e inhabilitada
        para su uso.
  lista: lista sobre la cual se invoca la primitiva.
*/
void eliminarLista(ListaSucursal &lista);

/*
  pre: lista fue creada con crearLista().
  post: si el dato se encuentra en la lista, devuelve el puntero al primer nodo
        que lo contiene. Si el dato no se encuentra en la lista devuelve finLista().
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a localizar.
  return: puntero al nodo localizado o finLista().
*/
PtrNodoListaSucursal localizarDato(ListaSucursal &lista, Sucursal dato);

/*
  pre: lista fue creada con crearLista() y cargada con datos ordenados de
        menor a mayor respecto del sentido progresivo.
  post: agrega a la lista el dato manteniendo el orden pero con multiples
        valores iguales y devuelve un puntero al nodo insertado.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a insertar.
  return: puntero al nodo insertado.
*/
PtrNodoListaSucursal insertarDato(ListaSucursal &lista, Sucursal dato);

/*
  pre: la lista fue creada con crearLista().
  post: elimina el dato de la lista, si el mismo se encuentra.
  lista: lista sobre la cual se invoca la primitiva.
  dato: elemento a eliminar.
*/
void eliminarDato(ListaSucursal &lista, Sucursal dato);

/*
  pre: la lista fue creada con crearLista().
  post: reordena la lista.
  lista: lista sobre la cual se invoca la primitiva.
*/
void reordenar(ListaSucursal &lista, string tipoOrdenamiento);

/*
  pre: la lista fue creada con crearLista().
  post: devuelve la cantidad de datos que tiene la lista.
  lista: lista sobre la cual se invoca la primitiva.
*/
int longitud(ListaSucursal &lista);

/*
  pre: la lista fue creada con crearLista().
  post: devuelve una nueva ListaSucursal con los datos de la original.
  sucursales: lista sobre la cual se invoca la primitiva.
*/
ListaSucursal copiarLista(ListaSucursal &sucursales);

#endif // LISTASUCURSAL_H_INCLUDED
