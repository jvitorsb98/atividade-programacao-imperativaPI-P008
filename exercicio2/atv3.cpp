#include<iostream>
#define NUM_DE_ALUNOS 15

using namespace std;

void geraPrimeiraAvaliacao(float *);
void geraSegundaAvaliacao(float *);
void comparacao(float * , float *);
void preencheMedia(float* ,float*, float*);

int main(){

    float notasDosAlunosAV1[NUM_DE_ALUNOS];
    float notasDosAlunosAV2[NUM_DE_ALUNOS];
    float medias[NUM_DE_ALUNOS];

    geraPrimeiraAvaliacao(notasDosAlunosAV1);
    geraSegundaAvaliacao(notasDosAlunosAV2);
    comparacao(notasDosAlunosAV1,notasDosAlunosAV2);
    preencheMedia(notasDosAlunosAV1,notasDosAlunosAV2,medias);

    return 0;
}

void comparacao(float *notasDosAlunosAV1 , float *notasDosAlunosAV2){
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
}

void geraPrimeiraAvaliacao(float *notasDosAlunosAV1){
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        notasDosAlunosAV1[i] =  ((float)rand()/RAND_MAX)*10;
    }
}

void geraSegundaAvaliacao(float *notasDosAlunosAV2){
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        notasDosAlunosAV2[i] =  ((float)rand()/RAND_MAX)*10;
    }
}

void preencheMedia(float *notasDosAlunosAV1 ,float *notasDosAlunosAV2, float *medias){
    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        medias[i] = (notasDosAlunosAV1[i]+notasDosAlunosAV2[i])/2;
    }
}
