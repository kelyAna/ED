typedef struct arvore Arvore;

typedef struct no No;

typedef struct jogador Jogador;

struct jogador{
    Arvore *baralho;
    int cont_vitoria;
    int cont_rodada;
};

Arvore* criar();

void inserir(Arvore *a, int valor);

int remover(Arvore *a, int valor);

int vazia(Arvore *a);

int cheia(Arvore *a);

void imprimir(Arvore *a, int ordem);

void liberar(Arvore *a);

int procuraMenor(Arvore *a);

int procuraMaior(Arvore *a);
