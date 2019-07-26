typedef struct fila Fila;

Fila* criar_fila();

void inserir_fila(Fila *f, int valor);

int remover_fila(Fila *f);

int vazia_fila(Fila *f);

int cheia_fila(Fila *f);

void imprimir_fila(Fila *f);

void liberar_fila(Fila *f);
