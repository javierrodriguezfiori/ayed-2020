
/* TDA Lista
 * Implementación Simplemente Enlazada
 * Archivo : ListaPuntajesEquipoPorFecha.cpp
 * Versión : 1.1
 */


#include "ListaPuntajesEquipoPorFecha.h"

/******************************************************************************/
/* Definición de Tipos de Datos para manejo interno */
/*--------------------------------------------------*/


/******************************************************************************/
/* Funciones Adicionales */
/*-----------------------*/

/*
  pre : ninguna.
  post: compara ambos dato1 y dato2, devuelve
          mayorpuntajetotal si dato1 es mayor que dato2,
          igualpuntajetotal si dato1 es igual a dato2,
          menorpuntajetotal si dato1 es menor que dato2.

  dato1.puntaje : dato a comparar.
  dato2.puntaje : dato a comparar.
  return resultado de comparar dato1 respecto de dato2.
*/
ResultadoComparacionPuntajesEquipoPorFecha compararDatoPuntajesEquipoPorFecha(PuntajesEquipoPorFecha dato1, PuntajesEquipoPorFecha dato2) {
    if ((dato1.puntos) >(dato2.puntos)) {
        return MAYOREquipoPorFecha;
    }
    else if (dato1.puntos < dato2.puntos) {
        return MENOREquipoPorFecha;
    }
    else {
        return IGUALEquipoPorFecha;
    }
}


/******************************************************************************/
/* Implementación de Primitivas */
/*------------------------------*/

void crearListaPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {
  lista.primero = finPuntajesEquipoPorFecha();
}

/*----------------------------------------------------------------------------*/
bool listaVaciaPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {

  return (primero(lista) == finPuntajesEquipoPorFecha());
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha finPuntajesEquipoPorFecha() {
  return NULL;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha primero(ListaPuntajesEquipoPorFecha &lista) {
  return lista.primero;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha siguiente(ListaPuntajesEquipoPorFecha &lista, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  /* verifica si la lista está vacia o si ptrNodo es el último */
  if ((! listaVaciaPuntajesTotal(lista)) && (ptrNodo != finPuntajesEquipoPorFecha()))
    return ptrNodo->sgte;
  else
    return finPuntajesEquipoPorFecha();
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha anterior(ListaPuntajesEquipoPorFecha &lista, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  PtrNodoListaPuntajesEquipoPorFecha ptrPrevio = finPuntajesEquipoPorFecha();
  PtrNodoListaPuntajesEquipoPorFecha ptrCursor = primero(lista);

  while (( ptrCursor != finPuntajesEquipoPorFecha()) && (ptrCursor != ptrNodo)) {
    ptrPrevio = ptrCursor;
    ptrCursor = siguiente(lista,ptrCursor);
  }
  return ptrPrevio;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha ultimo(ListaPuntajesEquipoPorFecha &lista) {

  /* el último nodo de la lista es el anterior al finPuntajeTotal() */
  return anterior(lista,finPuntajesEquipoPorFecha());
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha crearNodoLista(PuntajesEquipoPorFecha dato) {

  /* reserva memoria para el nodo y luego completa sus datos */
  PtrNodoListaPuntajesEquipoPorFecha ptrAux = new NodoListaPuntajesEquipoPorFecha();

  ptrAux->dato = dato;
  ptrAux->sgte = finPuntajesEquipoPorFecha();

  return ptrAux;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha adicionarPrincipio(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes) {

  /* crea el nodo */
  PtrNodoListaPuntajesEquipoPorFecha ptrNuevoNodo = crearNodoLista(puntajes);

  /* lo incorpora al principio de la lista */
  ptrNuevoNodo->sgte = lista.primero;
  lista.primero = ptrNuevoNodo;

  return ptrNuevoNodo;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha adicionarDespues(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  PtrNodoListaPuntajesEquipoPorFecha ptrNuevoNodo = finPuntajesEquipoPorFecha();

  /* si la lista está vacia se adiciona la principio */
  if (listaVaciaPuntajesTotal(lista))
    ptrNuevoNodo = adicionarPrincipio(lista,puntajes);

  else {
    if (ptrNodo != finPuntajesEquipoPorFecha()) {

      /* crea el nodo y lo intercala en la lista */
      ptrNuevoNodo = crearNodoLista(puntajes);

      ptrNuevoNodo->sgte = ptrNodo->sgte;
      ptrNodo->sgte = ptrNuevoNodo;
    }
  }
  return ptrNuevoNodo;
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha adicionarFinal(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes) {

  /* adiciona el dato después del último nodo de la lista */
  return adicionarDespues(lista,puntajes,ultimo(lista));
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha adicionarAntes(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  PtrNodoListaPuntajesEquipoPorFecha ptrNuevoNodo = finPuntajesEquipoPorFecha();

  if (! listaVaciaPuntajesTotal(lista)) {
    if (ptrNodo != primero(lista))
      ptrNuevoNodo = adicionarDespues(lista,puntajes,anterior(lista,ptrNodo));
    else
      ptrNuevoNodo = adicionarPrincipio(lista,puntajes);
   }
   return ptrNuevoNodo;
}

/*----------------------------------------------------------------------------*/
void colocarDatoPuntajesTotal(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha &puntajes, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  if ( (! listaVaciaPuntajesTotal(lista)) && (ptrNodo != finPuntajesEquipoPorFecha()))
    ptrNodo->dato = puntajes;
}

/*----------------------------------------------------------------------------*/
void obtenerDatoPuntajesTotal(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha &puntajes, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  if ((! listaVaciaPuntajesTotal(lista)) && (ptrNodo != finPuntajesEquipoPorFecha()))
    puntajes = ptrNodo->dato;
}

/*----------------------------------------------------------------------------*/
void eliminarNodoPuntajesTotal(ListaPuntajesEquipoPorFecha &lista, PtrNodoListaPuntajesEquipoPorFecha ptrNodo) {

  PtrNodoListaPuntajesEquipoPorFecha ptrPrevio;

  /* verifica que la lista no esté vacia y que nodo no sea finPuntajeTotal*/
  if ((! listaVaciaPuntajesTotal(lista)) && (ptrNodo != finPuntajesEquipoPorFecha())) {

    if (ptrNodo == primero(lista))
      lista.primero = siguiente(lista,primero(lista));

    else {
      ptrPrevio = anterior( lista , ptrNodo );
      ptrPrevio->sgte = ptrNodo->sgte;
    }
    // Si el dato es un TDA, acá habría que llamar al destructor.

    delete ptrNodo;
  }
}

/*----------------------------------------------------------------------------*/
void eliminarNodoPrimeroPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {

  if (! listaVaciaPuntajesTotal(lista))
    eliminarNodoPuntajesTotal(lista,primero(lista));
}

/*----------------------------------------------------------------------------*/
void eliminarNodoUltimoPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {

  if (! listaVaciaPuntajesTotal(lista))
    eliminarNodoPuntajesTotal(lista,ultimo(lista));
}

/*----------------------------------------------------------------------------*/
void eliminarListaPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {

  /* retira uno a uno los nodos de la lista */
  while (! listaVaciaPuntajesTotal(lista))
    eliminarNodoPuntajesTotal(lista,primero(lista));
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha localizarDatoPuntajes(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes) {

   bool encontrado = false;
   PuntajesEquipoPorFecha datoCursor;
   PtrNodoListaPuntajesEquipoPorFecha ptrCursor = primero(lista);

  /* recorre los nodos hasta llegar al último o hasta
     encontrar el nodo buscado */
  while ((ptrCursor != finPuntajesEquipoPorFecha()) && (! encontrado)) {

    /* obtiene el dato del nodo y lo compara */
    obtenerDatoPuntajesTotal(lista,datoCursor,ptrCursor);
    if (compararDatoPuntajesEquipoPorFecha(datoCursor,puntajes) == IGUALEquipoPorFecha)
      encontrado = true;
    else
      ptrCursor = siguiente(lista,ptrCursor);
  }

  /* si no lo encontró devuelve finPuntajeTotal */
  if (! encontrado)
    ptrCursor = finPuntajesEquipoPorFecha();

  return ptrCursor;
}

/*----------------------------------------------------------------------------*/
void eliminarDatoPuntajesTotal(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes) {

  /* localiza el dato y luego lo elimina */
  PtrNodoListaPuntajesEquipoPorFecha ptrNodo = localizarDatoPuntajes(lista,puntajes);
  if (ptrNodo != finPuntajesEquipoPorFecha())
    eliminarNodoPuntajesTotal(lista,ptrNodo);
}

/*----------------------------------------------------------------------------*/
PtrNodoListaPuntajesEquipoPorFecha insertarDato(ListaPuntajesEquipoPorFecha &lista, PuntajesEquipoPorFecha puntajes) {

  PtrNodoListaPuntajesEquipoPorFecha ptrPrevio = primero(lista);
  PtrNodoListaPuntajesEquipoPorFecha ptrCursor = primero(lista);
  PtrNodoListaPuntajesEquipoPorFecha ptrNuevoNodo;
  PuntajesEquipoPorFecha datoCursor;
  bool ubicado = false;

  /* recorre la lista buscando el lugar de la inserción */
  while ((ptrCursor != finPuntajesEquipoPorFecha()) && (! ubicado)) {

    obtenerDatoPuntajesTotal(lista,datoCursor,ptrCursor);
    if (compararDatoPuntajesEquipoPorFecha(datoCursor,puntajes) == MAYOREquipoPorFecha)
      ubicado = true;

    else {
      ptrPrevio = ptrCursor;
      ptrCursor = siguiente(lista,ptrCursor);
    }
  }

  if (ptrCursor == primero(lista))
    ptrNuevoNodo = adicionarPrincipio(lista,puntajes);
  else
    ptrNuevoNodo = adicionarDespues(lista,puntajes,ptrPrevio);

  return ptrNuevoNodo;
}

/*----------------------------------------------------------------------------*/

void reordenarPuntajesTotal(ListaPuntajesEquipoPorFecha &lista) {

  ListaPuntajesEquipoPorFecha temp = lista;
  PtrNodoListaPuntajesEquipoPorFecha ptrCursor = primero(temp);
  crearListaPuntajesTotal(lista);
  while ( ptrCursor != finPuntajesEquipoPorFecha() ) {
        PuntajesEquipoPorFecha puntajes;
        obtenerDatoPuntajesTotal( temp, puntajes, ptrCursor);
        insertarDato( lista, puntajes );
        eliminarNodoPuntajesTotal( temp, ptrCursor );
        ptrCursor = primero(temp);
  }
  eliminarListaPuntajesTotal( temp );
}

/*----------------------------------------------------------------------------*/

int longitudPuntajesTotal(ListaPuntajesEquipoPorFecha &lista){
  PtrNodoListaPuntajesEquipoPorFecha ptrCursor = primero(lista);
  int longitud = 0;
  while ( ptrCursor != finPuntajesEquipoPorFecha() ) {
        longitud++;
        ptrCursor = siguiente( lista, ptrCursor);
  }
  return longitud;
}
/*----------------------------------------------------------------------------*/
