#include<iostream>
#define NUM_DE_ALUNOS 15

using namespace std;

int main(){

    float notasDosAlunosAV1[NUM_DE_ALUNOS];
    float notasDosAlunosAV2[NUM_DE_ALUNOS];

    printf("\n\n---PRIMEIRA AVALIAÇÃO---\n\n");
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        notasDosAlunosAV1[i] =  ((float)rand()/RAND_MAX)*10;
        printf("Aluno %d : %f\n",i+1,notasDosAlunosAV1[i]);
    }

    printf("\n\n---SEGUNDA AVALIAÇÃO---\n\n");
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        notasDosAlunosAV2[i] =  ((float)rand()/RAND_MAX)*10;
        printf("Aluno %d : %f\n",i+1,notasDosAlunosAV2[i]);
    }


    return 0;
}