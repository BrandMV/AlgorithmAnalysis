#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    This is just a pseudocode
*/

int main(int argc, char **argv){

    int n,m1,m2,m3,i, *A;

    func sumaCuadratica3Mayores(A, n){

        if(A[1] > A[2] && A[1] > A[3]){
            m1 = A[1];
            if(A[2] > A[3]){
                m2 = a[2];
                m3 = A[3];
            }else{
                m2 = A[3];
                m3 = A[2];
            }else if(A[2] > A[1] && A[2] > A[3]){
                m1 = A[2];
                if(A[1] > A[3]){
                    m2 = A[1];
                    m3 = A[3];
                }else{
                    m2 = A[3];
                    m3 = A[1];
                }
            }else{
                m1 = A[3];
                if(A[1] > A[2]){
                    m2 = A[1];
                    m3 = A[2];
                }else{
                    m2 = A[2];
                    m3 = A[1];
                }
            }
        }
        i = 4;
        while(i <= n){
            if(A[i] > m1){
                m3 = m2;
                m2 = m1;
                m1 = A[i];
            }else if(A[i] > m2){
                m3 = m2;
                m2 = A[i];
            }else if(A[i] > m3)
                m3 = A[i];

                i = i +1;
        }
        return = pow(m1 + m2 +m3, 2);
    }

    return 0;
}