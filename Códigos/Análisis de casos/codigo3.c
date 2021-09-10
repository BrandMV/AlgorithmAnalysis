#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    This is just a pseudocode
*/

int main(){

    func sumaCuadratica3MayoresV2(A, n){
        for(i=0;i<3;i++)
            for(j=0;j<n-1-i;j++)
                if(A[j]>A[j+1]){
                    aux = A[j];
                    A[j] = A[j+1];
                    A[j+1] = aux;
                }

        r = A[n-1] + A[n-2] + A[n-3];
        return pow(r, 2);        
    }
}