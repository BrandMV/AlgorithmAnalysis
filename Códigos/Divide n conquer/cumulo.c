#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float min(float derecha, float izquierda, float centro){
	if(derecha!=0 && izquierda!=0){
		if (derecha<=izquierda && derecha<=centro){
			 return derecha;
		}else if (izquierda<=derecha && izquierda<= centro){
			return izquierda;
		}else{
			return centro;
		}
	}else if(derecha!=0){
		if(derecha<=centro){
			return derecha;
		}else{
			return centro;
		}	
	}else if(izquierda!=0){
		if(izquierda<=centro){
			return izquierda;
		}else{
			return centro;
		}
	}else
		return centro;
}

float menor(float a, float b, float c){
    float menor[] = {a,b,c};
    float numMenor = menor[0];
    for(int i = 1; i < 3; i++){
        int actual = menor[i];
        if(actual < numMenor)
            numMenor = actual;
    }

    return numMenor;
}

float calcularDistancia(float x1,float y1,float x2,float y2){ return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2)); }

float distanciaEstrellas(float X[], float Y[], long int inicio, long int final){
    if(inicio == final)                                 //Si el inicio es igual al final indica que hay un elemento y lo retornamos
        return 0;

    long int i,j, mitad = (inicio + final) / 2;                       //Calculamos la mitad para buscar
    float izq = distanciaEstrellas(X,Y,inicio,mitad);                    //Llamada recursiva para la aprte izquierda
    float der = distanciaEstrellas(X,Y,mitad+1,final);                     //Llamada recursiva para la aprte derecha
    float distancia = 0, distanciaIzq = 0, distanciaCentral = 0;

    //Para la parte izquierda
    for(i=mitad; i>=inicio;i--){
        for(j=mitad+1; j<=final;i++){
            distancia = calcularDistancia(X[i],Y[i],X[j],Y[j]);
            if(((distancia <= distanciaCentral) | (distanciaCentral == 0)))
                distanciaCentral = distancia;
        }
    }

    // distanciaCentral = 0.0;

    // //Para la parte de la derecha
    // for(i=mitad+1; i<final;i++){
    //     distanciaDer = calcularDistancia(X[i],Y[i],X[i+1],Y[i+1]);
    //      if(distanciaCentral > distanciaDer ||distanciaCentral == 0)
    //         distanciaCentral = distanciaDer;
    // }
    printf("\nDistancia:");    //Imprimimimos la distancia minima de dos estrellas

    return min(izq,der,distanciaCentral);
}

int main()
{
    long int n;                    //Cantidad de estrellas
    scanf("%ld", &n);                  //Leemos la cantidad de estrellas
    if(n < 2) return 0;                 //Si la cantidad de estrellas es menor a 2 salimos
    float X[n],  Y[n];                  //Arreglos que guardarán las coordenadas de cada estrella
    long int i;                        //Variable para loops;
    for(i=0;i<n;i++){
        scanf("%f",&X[i]);
        scanf("%f",&Y[i]);
    }
    // float dist = distanciaEstrellas(X,Y,0,n-1);
    // float dista = calcularDistancia(X[0],Y[0],X[2],Y[2]);

    printf("Distancia: %f", distanciaEstrellas(X,Y,0,n-1));    //Imprimimimos la distancia minima de dos estrellas
    /* code */
    return 0;
}