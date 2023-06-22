#include <stdio.h>
#include "interseccion.h"

int main() {
    Vector vector1 ={0,1,2,3,5,7,89,.longitud=7};

    Vector vector2 ={6,1,8,3,9,7,100,.longitud=7};
    printf("%d\n",vector1.longitud);

    buscarinterseccion(vector1, vector2);

    return 0;
}
