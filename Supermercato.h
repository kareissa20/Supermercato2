#ifndef SUPERMERCATO_H
#define SUPERMERCATO_H
#include <string>


void inserisciVendite(int vendite[3][7]);
void visualizzaVendite(int vendite[3][7]);
int totaleVenditeProdotto(int vendite[3][7], int prodotto);
int totaleVenditeGiorno(int vendite[3][7], int giorno);
int prodottoPiuVenduto(int vendite[3][7]);
int giornoVenditeMaggiori(int vendite[3][7]);

const std::string giorniSettimana[] = {"Lun", "Mar", "Mer", "Gio", "Ven", "Sab", "Dom"};

#endif