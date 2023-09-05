#include<iostream>

using namespace std;

int main(){

    int vetor[100];
    int aparicoes[20]={};

    for(int i = 0 ; i < 100 ; i++){
        vetor[i] = rand()%20 +1;
        aparicoes[vetor[i]-1]++;
    }

    for(int i = 0 ; i < 20 ; i++){
        printf("%d aparece %d vezes\n",i+1,aparicoes[i]);
    }


    return 0;
}