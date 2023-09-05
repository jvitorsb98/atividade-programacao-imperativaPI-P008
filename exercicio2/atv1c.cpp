#include<iostream>

using namespace std;

int main(){

    int vetor[100];
    int aparicoes[20]={};
    int maisAparicoes = 0;

    for(int i = 0 ; i < 100 ; i++){
        vetor[i] = rand()%20 +1;
        aparicoes[vetor[i]-1]++;
        if(aparicoes[vetor[i]-1] > maisAparicoes){
            maisAparicoes = aparicoes[vetor[i]-1];
        }
    }


    for(int i = 0 ; i < 20 ; i++){
        if(aparicoes[i] == maisAparicoes){
            printf("O numero %d tem o maior numero de aparições com %d \n",i+1,aparicoes[i]);
        }
    }


    return 0;
}