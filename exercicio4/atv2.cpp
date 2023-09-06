#include<iostream>
#include<cctype>
#include<cstring>
#include <algorithm> 

using namespace std;

string geraStringAleatoria();
void preencheStrings(string *);
string convertePrimeiroCaracter(string);
void converteCaracteres(string *);
void imprimeStringsAlpha(string *);

int main(){

    string s[10];

    preencheStrings(s);
    converteCaracteres(s);
    imprimeStringsAlpha(s);

    return 0;
}

void imprimeStringsAlpha(string *s){
    sort(s , s+10);
    for(int i = 0 ; i < 10 ; i++){
        cout << (s[i]) << endl;
    }

}

void converteCaracteres(string *s){
    for(int i = 0 ; i < 10 ; i++){
        s[i] = convertePrimeiroCaracter(s[i]);
    }
}

string convertePrimeiroCaracter(string s){
    if(!s.empty()){
        s[0] = toupper(s[0]);
    }
    return s;
}

void preencheStrings(string *s){
    for(int i = 0 ; i < 10 ; i++){
        s[i] = geraStringAleatoria();
    }
}

string geraStringAleatoria(){
    string aleatoria;
    char a = 'a';
    char z = 'z';
    for(int i = 0 ; i < 10 ; i++){
        aleatoria.push_back(a + rand()%(z - a));
    }
    return aleatoria;
}

