//
// Created by Usuario on 22/6/2023.
//

#include "interseccion.h"
#include "stdio.h"

void buscarinterseccion (Vector vector1,Vector vector2){
    Vector interseccion;
    interseccion.longitud=0;
    int i,j;
    for (i=0 ; i<vector1.longitud ; i++){
        for (j=0 ; j<vector2.longitud ; j++)
           if (vector1.dato[i] == vector2.dato[j])
               interseccion.dato[i] = vector2.dato[j];
                interseccion.longitud ++;
    }
    printf("La interseccion es:\n");
    for (i = 0 ; i<interseccion.longitud ; i ++)
    printf ("%d\n", interseccion.dato[i]);

}