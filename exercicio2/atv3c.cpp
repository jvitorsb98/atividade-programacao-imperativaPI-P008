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

    printf("\n\n---COMPARAÇÃO DE AVALIAÇÃO---\n\n");
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        if(notasDosAlunosAV2[i] > notasDosAlunosAV1[i]){
            printf("Aluno %d melhorou \n",i+1);
        }else if(notasDosAlunosAV1[i] < notasDosAlunosAV2[i]){
            printf("Aluno %d piorou \n",i+1);
        }else{
            printf("Aluno %d manteve a nota \n",i+1);
        }
    }


    return 0;
}