/*
Utilizzando la libreria <string>, si scriva un programma che data una matrice di caratteri
quadrata, controlla se la parola leggibile sulla diagonale principale è anche leggibile in una
delle righe o colonne della matrice, restituendo 1 in caso affermativo e zero altrimenti.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string m[5];
    string parola;

    //Chiedi in input le parole
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci la parola #" << i + 1 << ": " << endl;
        cin >> m[i];
    }

    cout << "Inserisci la parola da cercare sia in orizzontale che in verticale: " << endl;
    cin >> parola;

    //Controlla la parola presente sulla diagonale
    string parola_diagonale;
    for (int i = 0; i < 5; i++) {
        parola_diagonale += m[i][i];
    }

    // Controlla se la parola è presente in una delle righe
    string parola_riga;

    for (int i = 0; i < 5; i++) {
        string colonna;
        for (int j = 0; j < 5; j++) {
            colonna += m[j][i];
        }
        if (colonna.find(parola) != string::npos) {
            parola_riga = m[i];

            break;
        }
    }


    //Stampa matrice e risultato
    cout << endl;

    for (int j = 0; j < 5; j++) {
        cout << m[j];
        cout << endl;
    }

    cout << endl;

    cout << parola_riga << " " << parola_diagonale << endl;

    if (parola_riga == parola_diagonale) {
        cout << " La parola " << parola << " e leggibile sia in diagonale che sulla riga" << endl;
    }



    return 0;
}
