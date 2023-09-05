#include<iostream>
#define NUM_DE_ESTACOES 10

using namespace std;

int main(){

    float temperaturas[NUM_DE_ESTACOES];
    float maxima = 9;
    float minima = 45;

    for(int i = 0 ; i < NUM_DE_ESTACOES ; i++){
        temperaturas[i] = 10 + 30.0*(rand()%30)/30.0;
        printf("%f\n",temperaturas[i]);
        if(temperaturas[i] > maxima){
            maxima = temperaturas[i];
        }
        if(temperaturas[i] < minima){
            minima = temperaturas[i];
        }
    }

    printf("\nTemperatura Maxima : %f\n",maxima);
    printf("\nTemperatura Minima : %f\n",minima);


    return 0;
}