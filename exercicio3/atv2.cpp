#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

string geraStringAleatoria();
void preencheStrings(string &, string &);
string convertePrimeiroCaracter(string);
void converteCaracteres(string &, string &);
void imprimeStringsAlpha(string , string );

int main(){

    string s1,s2;

    preencheStrings(s1,s2);
    converteCaracteres(s1,s2);
    imprimeStringsAlpha(s1,s2);

    return 0;
}

void imprimeStringsAlpha(string s1, string s2){
    if(s1 < s2){
        cout << s1 << endl;
        cout << s2 << endl;
    }else{
        cout << s2 << endl;
        cout << s1 << endl;
    }
}

void converteCaracteres(string &s1 , string &s2){
    s1 = convertePrimeiroCaracter(s1);
    s2 = convertePrimeiroCaracter(s2);
}

string convertePrimeiroCaracter(string s){
    if(!s.empty()){
        s[0] = toupper(s[0]);
    }
    return s;
}

void preencheStrings(string &s1 , string &s2){
    s1 = geraStringAleatoria();
    s2 = geraStringAleatoria();
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

