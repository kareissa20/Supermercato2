#include <iostream>
#include "supermercato.h"
using namespace std;

int main() {
    int vendite[3][7] = {0};
    int scelta;
    int datiCaricati = 0;

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
            case 1:
                inserisciVendite(vendite);
                datiCaricati = 1;
                break;
            case 2:
                if(datiCaricati == 0) cout << "Errore: Inserisci prima le vendite!" << endl;
                else visualizzaVendite(vendite);
                break;
            case 3:
                if(datiCaricati == 0) cout << "Errore: Inserisci prima le vendite!" << endl;
                else {
                    int p; cout << "Inserisci num prodotto (0-2): "; cin >> p;
                    while (p < 0 || p > 2) {
                        cout << "Errore! Inserisci un numero tra 0 e 2: ";
                        cin >> p;
                    }
                    cout << "Totale: " << totaleVenditeProdotto(vendite, p) << endl;
                }
                break;
            case 4:
                if(datiCaricati == 0) cout << "Errore: Inserisci prima le vendite!" << endl;
                else {
                    int g; cout << "Inserisci num giorno (0-6): "; cin >> g;
                    while (g < 0 || g > 6) {
                        cout << "Errore! Inserisci un numero tra 0 e 6: ";
                        cin >> g;
                    }
                    cout << "Totale: " << totaleVenditeGiorno(vendite, g) << endl;
                }
                break;
            case 5:
                if(datiCaricati == 0) cout << "Errore: Inserisci prima le vendite!" << endl;
                else cout << "Il prodotto piu' venduto e': " << prodottoPiuVenduto(vendite) << endl;
                break;
            case 6:
                if(datiCaricati == 0) cout << "Errore: Inserisci prima le vendite!" << endl;
                else cout << "Il giorno migliore e': " << giorniSettimana[giornoVenditeMaggiori(vendite)] << endl;
                break;
            case 0: cout << "Uscita..." << endl; break;
            default: cout << "Scelta non valida!" << endl;
        }
    } while (scelta != 0);

    return 0;
}