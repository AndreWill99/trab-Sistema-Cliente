#include <stdlib.h>
#include <string.h>

//criar novo nó e inserir no inicio
void inserirAguardando (NoDuplo **topo, Cliente c){
    NoDuplo *novo = (NoDuplo*) malloc(sizeof(NoDuplo));
    if (novo == NULL){
        printf("Erro ao alocar memoria\n");
        return;
    }
    novo->dado = c;
    novo->prox = *topo;
    novo->ant = NULL;
    if (*topo != NULL){
        (*topo)->ant = novo;
    }

    *topo = novo;
}

void removerAguardando (NoDuplo **topo, NoDuplo *alvo){
    if (*topo == NULL || alvo == NULL){
        return;
    }
    if (*topo == alvo){
        *topo = alvo->prox;
    }
    if (alvo->prox != NULL){
        alvo->prox->ant = alvo->ant;
    }
    if (alvo->ant != NULL){
        alvo->ant->prox = alvo->prox;
    }
    free(alvo);
}

//contagem
int contarAguardando (NoDuplo *topo){
    int cont = 0;
    NoDuplo *atual = topo;
    while (atual != NULL){
        cont++;
        atual = atual->prox;
    }
    return cont;
}
