typedef struct racional Racional;

Racional* cria(int a, int b);

void libera(Racional* r);

void add(Racional* x, Racional* y);

void mult(Racional*x, Racional* y);

int iguais(Racional* x, Racional* y);