typedef struct fila Fila;

Fila* criar();

int furaFila(Fila *f, int pos, int valor);

void inserir(Fila *f, int valor);

int remover(Fila *f);

int vazia(Fila *f);

int cheia(Fila *f);

void imprimir(Fila *f);

void liberar(Fila *f);
