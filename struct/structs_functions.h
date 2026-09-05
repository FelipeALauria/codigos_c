#include "stdio.h"
#include "stdlib.h"
#include "math.h"

double calculo_nota_media_final_pesos(double* peso, double* notas){
    double notas_x_pesos = 0.0, soma_pesos = 0.0;
    
    for(int i = 0; i < sizeof(notas); i++){
        notas_x_pesos += notas[i] * peso[i];
        soma_pesos += peso[i];
    }

    double media = 0.0;

    return media = notas_x_pesos/soma_pesos;
}

