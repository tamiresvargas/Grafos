/**
 *
 * Trabalho 01 - Algoritmos com grafos 
 *
 * Adriano de Araujo Abreu Mourao (mourao.aaa at gmail.com)
 * Tamires Vargas Capanema Franco Santos (tamiresvargas at hotmail.com)
 *
 * */

#include <iostream>

#include "grafo.h"
#include "gMatriz.h"

using namespace std;

int main () {

    graf_bib::grafo grafo01("grafo01.txt");

    cout << graf_bib::toString(grafo01.retMatriz()) << endl;


    if(grafo01.completo()) 
        cout << "O grafo 01 e completo!" << endl;
    else {
        cout << "Complemento grafo 01:" << endl;
        cout << graf_bib::toString(grafo01.completarGrafo()) << endl;
    }

    cout << "======================" << endl << endl;

    graf_bib::grafo grafo02("grafo02.txt");

    cout << graf_bib::toString(grafo02.retMatriz()) << endl;
    if(grafo02.completo())
        cout << "O grafo 02 e completo!" << endl;
    else {
        cout << "Complemento grafo 02:" << endl;
        cout << graf_bib::toString(grafo02.completarGrafo()) << endl;
    }

    cout << "======================" << endl << endl;
    
    return 0;
}
