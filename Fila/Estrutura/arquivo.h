typedef  struct   fila Fila ;

Fila* criar();

void inserir(Fila *p, int valor);

int remover(Fila *p);

int vazia(Fila *p);

int cheia(Fila *p);

void imprimir(Fila*p);

void liberar(Fila *p);

