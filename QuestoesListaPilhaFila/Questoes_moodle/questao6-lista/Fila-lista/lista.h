typedef struct lista Lista;
#define N 10

struct lista{
    int v[N];
    int qtd_elem;
};

Lista* criar_lista();

void inserir_lista(Lista *l, int valor, int pos);

int remover_lista(Lista *l, int pos);

int vazia_lista(Lista *l);

int cheia_lista(Lista *l);

void imprimir_lista(Lista *l, int pos);

void liberar_lista(Lista *l);
