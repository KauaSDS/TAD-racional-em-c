#include <stdio.h>
#include "racional.h"

int main(){
    Racional* r1 = cria(5, 3);
    Racional* r2 = cria(25, 15);
    
    //add(r1, r2);

    //mult(r1, r2);
    
    
    if(iguais(r1,r2) == 1){
        printf("Iguais\n");
    }else{
        printf("Diferentes\n");
    }
    
    libera(r1);
    libera(r2);

    
    
    
}
    