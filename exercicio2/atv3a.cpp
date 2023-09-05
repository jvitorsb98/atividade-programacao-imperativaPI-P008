#include<iostream>
#define NUM_DE_ALUNOS 15

using namespace std;

int main(){

    float notasDosAlunos[NUM_DE_ALUNOS];

    for(int i = 0 ; i < NUM_DE_ALUNOS ; i++){
        notasDosAlunos[i] =  ((float)rand()/RAND_MAX)*10;
        printf("Aluno %d : %f\n",i+1,notasDosAlunos[i]);
    }


    return 0;
}