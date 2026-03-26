#ifndef CRM_H
#define CRM_H

#include <stdio.h>
#include <time.h>
#include <string.h>


//strutura para endereço usado apenas dentro do cliente
typedef struct{
    char rua[100];
    int numero;
    char bairro[100];
    char cidade[100];
    char estado[100];
    char cep[100];
}Endereco;

//strutura para cliente
typedef struct{
    char nome[100];
    char email[100];
    char telefone[20];
    struct tm data_captacao;

    //clientes efetivos
    char cpf[15];
    struct tm data_nascimento;
    char profissao[100];
    Endereco endereco;
}Cliente;

//Nós
typedef struct NoDuplo{
    Cliente dado;
    strct NoSimples *prox;
}NoDuplo;

typedef struct NoSimples{
    Cliente dado;
    struct NoSimples *prox;
}NoSimples;

typedef struct {
    NoSimples *frente;
    NoSimples *final;
}Fila;

//funções

void inicializar_fila(Fila *f);

//lista duplamente encadeada de aguardando
void inserirAguardando (NoDuplo **topo, Cliente c);
void removerAguardando (NoDuplo **topo, NoDuplo *alvo);
int contarAguardando (NoDuplo *topo);

//fila de compradores
void enfileirarComprador(Fila *f, Cliente c);
Cliente desenfileirarComprador(Fila *f);

//Funções para Lista Simples (Arquivados)
void arquivar_cliente(NoSimples **topo, Cliente c);

//utuilitarios
int calcularDiferencaDias(struct tm data_cap);
void mostrar_cliente(Cliente c, int detalhado);

//Funções principais
void cadastrar_cliente();
void listar_clientes();
void buscar_cliente();
void editar_cliente();
void excluir_cliente();
void menu();

#endif