#include "lista.h"

struct no {
  int valor;
  No* proximo;
};

No* criaLista() {
  return NULL;
}

No* insereNo(No* lista, int valor) {
  No* novo = (No*) malloc(sizeof(No));

  novo->valor = valor;
  novo->proximo = lista;

  return novo;
}

void imprimeLista(No* lista) {
  No* no = lista;

  while (no != NULL) {
    printf("%d ", no->valor);
    no = no->proximo;
  }

  printf("\n");
}
