/*
Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.
*/

#include <iostream>

using namespace std;

void calcularHoras(int hrInicial, int minInicial, int hrFinal, int minFinal);

int main() {
    int hrInicial, minInicial, hrFinal, minFinal;
    cin >> hrInicial >> minInicial >> hrFinal >> minFinal;

    calcularHoras(hrInicial, minInicial, hrFinal, minFinal);
}

void calcularHoras(int hrInicial, int minInicial, int hrFinal, int minFinal) {
    int inicioMin = hrInicial * 60 + minInicial;
    int fimMin = hrFinal * 60 + minFinal;

    if (fimMin <= inicioMin) {
        fimMin += 24 * 60;
    }

    int duracao = fimMin - inicioMin;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
}
