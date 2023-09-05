#include<iostream>
#define NUM_DE_ESTACOES 10

using namespace std;

int main(){

    float temperaturas[NUM_DE_ESTACOES];
    float media = 0;

    for(int i = 0 ; i < NUM_DE_ESTACOES ; i++){
        temperaturas[i] = 10 + 30.0*(rand()%30)/30.0;
        printf("%f\n",temperaturas[i]);
        media += temperaturas[i];
    }

    printf("\n\nTEMPERATURA MEDIA : %.f",media/NUM_DE_ESTACOES);

    //ATUALIZAÇÃO

    for(int i = 0 ; i < NUM_DE_ESTACOES ; i++){
        if(temperaturas[i] > media){
            temperaturas[i] +=1;
        }else if(temperaturas[i] < media){
            temperaturas[i] -=2;
        }
    } 

    return 0;
}