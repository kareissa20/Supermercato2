#include <iostream>
#include "supermercato.h"
using namespace std;

int main() {
    int vendite[3][7] = {0};
    int scelta;

    do {
        cout << "\n--- GESTIONALE SUPERMERCATO ---" << endl;
        cout << "1. Inserisci vendite settimanali " << endl;
        cout << "2. Visualizza tabella vendite" << endl;
        cout << "3. Totale vendite di un prodotto" << endl;
        cout << "4. Totale vendite di un giorno" << endl;
        cout << "5. Prodotto piu' venduto" << endl;
        cout << "6. Giorno con vendite maggiori" << endl;
        cout << "0. Esci" << endl;
        cout << "Scelta: ";
        cin >> scelta;

        switch(scelta) {
            case 1: inserisciVendite(vendite); break;
            case 2: visualizzaVendite(vendite); break;
            case 3:
                int p; cout << "Inserisci num prodotto (0-2): "; cin >> p;
                cout << "Totale: " << totaleVenditeProdotto(vendite, p) << endl;
                break;
            case 4:
                int g; cout << "Inserisci num giorno (0-6): "; cin >> g;
                cout << "Totale: " << totaleVenditeGiorno(vendite, g) << endl;
                break;
            case 5: cout << "Il prodotto piu' venduto e': " << prodottoPiuVenduto(vendite) << endl; break;
            case 6: cout << "Il giorno migliore e': " << giorniSettimana[giornoVenditeMaggiori(vendite)] << endl; break;
            case 0: cout << "Uscita..." << endl; break;
            default: cout << "Scelta non valida!" << endl;
        }
    } while (scelta != 0);

    return 0;
}