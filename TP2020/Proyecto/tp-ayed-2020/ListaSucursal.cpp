#include "ListaSucursal.h"

ResultadoComparacion compararDato(Sucursal dato1, Sucursal dato2, string tipoOrdenamiento) {
    if (tipoOrdenamiento=="facturacion"){
        if (getFacturacion(dato1) < getFacturacion(dato2)) {
        return MAYOR;
        }
        else if (getFacturacion(dato1) > getFacturacion(dato2)) {
            return MENOR;
        }
        else {
            return IGUAL;
        }
    }
    else if (tipoOrdenamiento=="articulos"){
      if (getArticulos(dato1) < getArticulos(dato2)) {
        return MAYOR;
        }
        else if (getArticulos(dato1) > getArticulos(dato2)) {
            return MENOR;
        }
        else {
            return IGUAL;
        }
    }
}

void crearLista(ListaSucursal &lista) {
  lista.primero = finLista();
}

bool listaVacia(ListaSucursal &lista) {
  return (primero(lista) == finLista());
}

PtrNodoListaSucursal finLista() {
  return NULL;
}

PtrNodoListaSucursal primero(ListaSucursal &lista) {
  return lista.primero;
}

PtrNodoListaSucursal siguiente(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo) {
  /* verifica si la lista est� vacia o si ptrNodo es el �ltimo */
  if ((! listaVacia(lista)) && (ptrNodo != finLista()))
    return ptrNodo->sgte;
  else
    return finLista();
}

PtrNodoListaSucursal anterior(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo) {
  PtrNodoListaSucursal ptrPrevio = finLista();
  PtrNodoListaSucursal ptrCursor = primero(lista);
  while (( ptrCursor != finLista()) && (ptrCursor != ptrNodo)) {
    ptrPrevio = ptrCursor;
    ptrCursor = siguiente(lista,ptrCursor);
  }
  return ptrPrevio;
}

PtrNodoListaSucursal ultimo(ListaSucursal &lista) {
  /* el �ltimo nodo de la lista es el anteriorListaJugador al finListaJugador() */
  return anterior(lista,finLista());
}

PtrNodoListaSucursal crearNodo(Sucursal dato) {
  /* reserva memoria para el nodo y luego completa sus datos */
  PtrNodoListaSucursal ptrAux = new NodoListaSucursal;
  ptrAux->dato = dato;
  ptrAux->sgte = finLista();

  return ptrAux;
}

PtrNodoListaSucursal adicionarPrincipio(ListaSucursal &lista, Sucursal dato) {
  /* crea el nodo */
  PtrNodoListaSucursal ptrNuevoNodo = crearNodo(dato);
  /* lo incorpora al principio de la lista */
  ptrNuevoNodo->sgte = lista.primero;
  lista.primero = ptrNuevoNodo;

  return ptrNuevoNodo;
}

PtrNodoListaSucursal adicionarDespues(ListaSucursal &lista, Sucursal dato, PtrNodoListaSucursal ptrNodo) {
  PtrNodoListaSucursal ptrNuevoNodo = finLista();
  /* si la lista est� vacia se adiciona la principio */
  if (listaVacia(lista))
    ptrNuevoNodo = adicionarPrincipio(lista,dato);
  else {
    if (ptrNodo != finLista()) {

      /* crea el nodo y lo intercala en la lista */
      ptrNuevoNodo = crearNodo(dato);

      ptrNuevoNodo->sgte = ptrNodo->sgte;
      ptrNodo->sgte = ptrNuevoNodo;
    }
  }
  return ptrNuevoNodo;
}

PtrNodoListaSucursal adicionarFinal(ListaSucursal &lista, Sucursal dato) {
  /* adiciona el dato despu�s del �ltimo nodo de la lista */
  return adicionarDespues(lista,dato,ultimo(lista));
}

PtrNodoListaSucursal adicionarAntes(ListaSucursal &lista, Sucursal dato, PtrNodoListaSucursal ptrNodo) {
  PtrNodoListaSucursal ptrNuevoNodo = finLista();
  if (! listaVacia(lista)) {
    if (ptrNodo != primero(lista))
      ptrNuevoNodo = adicionarDespues(lista,dato,anterior(lista,ptrNodo));
    else
      ptrNuevoNodo = adicionarPrincipio(lista,dato);
   }
   return ptrNuevoNodo;
}

void colocarDato(ListaSucursal &lista, Sucursal &dato, PtrNodoListaSucursal ptrNodo) {
  if ( (! listaVacia(lista)) && (ptrNodo != finLista()))
    ptrNodo->dato = dato;
}

void obtenerDato(ListaSucursal &lista, Sucursal &dato, PtrNodoListaSucursal ptrNodo) {
  if ((! listaVacia(lista)) && (ptrNodo != finLista()))
    dato = ptrNodo->dato;
}

void eliminarNodo(ListaSucursal &lista, PtrNodoListaSucursal ptrNodo) {
  PtrNodoListaSucursal ptrPrevio;
  /* verifica que la lista no est� vacia y que nodo no sea finLista*/
  if ((! listaVacia(lista)) && (ptrNodo != finLista())) {
    if (ptrNodo == primero(lista))
        lista.primero = siguiente(lista,primero(lista));
    else {
        ptrPrevio = anterior( lista , ptrNodo );
        ptrPrevio->sgte = ptrNodo->sgte;
    }
    // Si el dato es un TDA, ac� habr�a que llamar al destructor.
    delete ptrNodo;
  }
}

void eliminarNodoPrimero(ListaSucursal &lista) {
  if (! listaVacia(lista))
    eliminarNodo(lista,primero(lista));
}

void eliminarNodoUltimo(ListaSucursal &lista) {
  if (! listaVacia(lista))
    eliminarNodo(lista,ultimo(lista));
}

void eliminarLista(ListaSucursal &lista) {
  /* retira uno a uno los nodos de la lista */
  while (! listaVacia(lista))
    eliminarNodo(lista,primero(lista));
}

PtrNodoListaSucursal localizarDato(ListaSucursal &lista, Sucursal dato, string tipoOrdenamiento) {
    bool encontrado = false;
    Sucursal datoCursor;
    PtrNodoListaSucursal ptrCursor = primero(lista);
    /* recorre los nodos hasta llegar al �ltimo o hasta
     encontrar el nodo buscado */
    while ((ptrCursor != finLista()) && (! encontrado)) {
    /* obtiene el dato del nodo y lo compara */
    obtenerDato(lista,datoCursor,ptrCursor);
    if (compararDato(datoCursor,dato,tipoOrdenamiento) == IGUAL)
      encontrado = true;
    else
      ptrCursor = siguiente(lista,ptrCursor);
  }
  /* si no lo encontr� devuelve finLista*/
  if (! encontrado)
    ptrCursor = finLista();
  return ptrCursor;
}

PtrNodoListaSucursal insertarDato(ListaSucursal &lista, Sucursal dato, string tipoOrdenamiento) {
  PtrNodoListaSucursal ptrPrevio = primero(lista);
  PtrNodoListaSucursal ptrCursor = primero(lista);
  PtrNodoListaSucursal ptrNuevoNodo;
  Sucursal datoCursor;
  bool ubicado = false;
  /* recorre la lista buscando el lugar de la inserci�n */
  while ((ptrCursor != finLista()) && (! ubicado)) {
    obtenerDato(lista,datoCursor,ptrCursor);
    if (compararDato(datoCursor,dato,tipoOrdenamiento) == MAYOR)
      ubicado = true;
    else {
      ptrPrevio = ptrCursor;
      ptrCursor = siguiente(lista,ptrCursor);
    }
  }
  if (ptrCursor == primero(lista))
    ptrNuevoNodo = adicionarPrincipio(lista,dato);
  else
    ptrNuevoNodo = adicionarDespues(lista,dato,ptrPrevio);
  return ptrNuevoNodo;
}

void eliminarDato(ListaSucursal &lista, Sucursal dato, string tipoOrdenamiento) {
  /* localiza el dato y luego lo elimina */
  PtrNodoListaSucursal ptrNodo = localizarDato(lista,dato,tipoOrdenamiento);
  if (ptrNodo != finLista())
    eliminarNodo(lista,ptrNodo);
}

void reordenar(ListaSucursal &lista, string tipoOrdenamiento) {
  ListaSucursal temp = lista;
  PtrNodoListaSucursal ptrCursor = primero(temp);
  crearLista(lista);
  while ( ptrCursor != finLista() ) {
        Sucursal dato;
        obtenerDato(temp, dato, ptrCursor);
        insertarDato(lista, dato, tipoOrdenamiento);
        eliminarNodo(temp, ptrCursor);
        ptrCursor = primero(temp);
  }
  eliminarLista(temp);
}

int longitud(ListaSucursal &lista){
  PtrNodoListaSucursal ptrCursor = primero(lista);
  int longitudLista = 0;
  while ( ptrCursor != finLista() ) {
        longitudLista++;
        ptrCursor = siguiente(lista,ptrCursor);
  }
  return longitudLista;
}

ListaSucursal copiarLista(ListaSucursal &sucursales){
    ListaSucursal temp;
    crearLista(temp);
    Sucursal sucursal;
    crear(sucursal);
    PtrNodoListaSucursal cursor;
    cursor = primero(sucursales);

    while(cursor!=finLista()){
        obtenerDato(sucursales,sucursal,cursor);
        adicionarFinal(temp,sucursal);
        cursor = siguiente(sucursales, cursor);
    }

    destruir(sucursal);

    return temp;
}
