#include <stdlib.h>
#include <stdio.h>

#define N_VECES 1000000

int main(int argc, char **argv){
    int n=0, i=0, mayor2, mayor1, res=0, j, aux;
    int cont = 0;
    int *A;
    float promedio = 0;

    if(argc != 2 || A == NULL)
        exit(0);

    n = atoi(argv[1]);

    A = malloc(n*sizeof(int));


    for(j=0;j<N_VECES;j++){

        i = 0; cont = 0;

        for(i=0;i<n;i++){
            A[i] = rand() % 30000 + 1;
        }

        if(A[0] > A[1]){
            cont++;
            mayor1 = A[0]; cont++;
            mayor2 = A[1]; cont++;

        }else{
            cont++;
            mayor1 = A[1]; cont++;
            mayor2 = A[0]; cont++;
        }
        i = 2;

        while(i < n){
            cont++; // comparacion if
            if(A[i] > mayor1 || A[i] == mayor1 ){
                mayor2 = mayor1; cont++;
                mayor1 = A[i]; cont++;
            }else{
                cont++; //comparacion else if
                if(A[i] > mayor2 || A[i] > mayor2){
                    mayor2 = A[i]; cont++;
                }

            }
            i = i + 1;
        }

        promedio = promedio + (float)cont;
    }


    promedio = promedio / N_VECES;
    printf("\nPromedio: %f operaciones", promedio);
    printf("\nNumero de operaciones: %d", cont);

    res = mayor1 * mayor2;

    return 0;
}
