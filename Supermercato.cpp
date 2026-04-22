#include <iostream>
#include <iomanip>
#include "supermercato.h"
using namespace std;

void inserisciVendite(int vendite[3][7]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Prod " << i << " Giorno " << giorniSettimana[j] << ": ";
            cin >> vendite[i][j];
        }
    }
}

void visualizzaVendite(int vendite[3][7]) {
    for (int i = 0; i < 3; i++) {
        cout << "Prodotto " << i << ": ";
        for (int j = 0; j < 7; j++) cout << "  " << vendite[i][j];
        cout << endl;
    }
}

int totaleVenditeProdotto(int vendite[3][7], int prodotto) {
    int s = 0;
    for (int j = 0; j < 7; j++) s += vendite[prodotto][j];
    return s;
}

int totaleVenditeGiorno(int vendite[3][7], int giorno) {
    int s = 0;
    for (int i = 0; i < 3; i++) s += vendite[i][giorno];
    return s;
}

int prodottoPiuVenduto(int vendite[3][7]) {
    int max = -1, p = 0;
    for (int i = 0; i < 3; i++) {
        int t = totaleVenditeProdotto(vendite, i);
        if (t > max) { max = t; p = i; }
    }
    return p;
}

int giornoVenditeMaggiori(int vendite[3][7]) {
    int max = -1, g = 0;
    for (int j = 0; j < 7; j++) {
        int t = totaleVenditeGiorno(vendite, j);
        if (t > max) { max = t; g = j; }
    }
    return g;
}
