#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    This is just a pseudocode
*/

int main(){

    Algoritmo frecuenciaMinNumeros
        Leer nanDimension A[n]
        i = 1
        Mientras i <= n
            Leer A[i]
            i = i+1
        FinMientras

        f = 0
        i = 1
        Mientras i <= n
            ntemp = A[i]
            j = 1
            ftemp = 0
            Mientras j <= n
                si ntemp = A[j]
                    ftemp = ftemp +1
                FinSi
                j = j +1
            FinMientras

            si f < ftemp
                f = ftemp
                num=ntemp
            FinSi

            i = i + 1
        FinMientras
        Escribir num
    FinAlgoritmo
    
}