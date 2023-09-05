#include<iostream>
#include<string>

using namespace std;

void conjugador(string verbo);

int main(){

    string verbo;

    cin >> verbo;

    conjugador(verbo);

    return 0;
}

void conjugador_Ar(string verbo ){
    verbo.pop_back();

    cout << "Eu " << verbo << "o" << endl;
    cout << "Tu " << verbo << "a" << endl;
    cout << "Ele " << verbo << "a" << endl;
    cout << "Nós " << verbo << "amos" << endl;
    cout << "Vós " << verbo << "eis" << endl;
    cout << "Eles " << verbo << "am" << endl;
}

void conjugador(string verbo){

    system("clear");

    verbo.pop_back();

    if(verbo.back() == 'a'){
        conjugador_Ar(verbo);
    }


}