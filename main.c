#include "lista.h"

int main() {
  No* lista = criaLista();

  lista = insereNo(lista, 5);
  lista = insereNo(lista, 4);
  lista = insereNo(lista, 3);

  imprimeLista(lista);
  
  return 0;
}
