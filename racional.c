#include<stdio.h>
#include<stdlib.h>

#include "racional.h" 

struct racional{
    int a;
    int b;
};

Racional* cria(int a, int b){
    Racional* r = (Racional*) malloc(sizeof(Racional));
    r->a = a;
    r->b = b;
    
    if(r== NULL){
        printf("Não foi possivel alocar");
    }
    
    return r;
}

void libera(Racional* r){
    free(r);
}

void add (Racional* x, Racional*y){
     x->a = x->a + y->a;
     x->b = x->b + y->b;
     printf("\n Adicao: %d/%d", x->a, x->b);
}

void mult (Racional* x, Racional*y){
     x->a = x->a * y->a;
     x->b = x->b * y->b;
     printf("\n Multiplicacao: %d/%d", x->a, x->b);
}

int iguais(Racional* x, Racional* y){
     if(x->a * y->b == x->b * y->a){
          return 1;
     }else{
          return 0;
     }
}

