/*
Considering the input of non-negative integer values​​, sort these numbers ​​according to the following criteria: First the even in ascending order followed by the odd in descending order.

Input
The first line of input contains a positive integer number N (1 < N <= 105). This is the number of following input lines. The next N lines contain, each one, a integer non-negative number.

Output
Print all numbers according to the explanation presented above. Each number must be printed in one line as shown below.
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
 
int main() {
    int quantidadeNumeros = 0;
    cin >> quantidadeNumeros;
    vector<int> numeros(quantidadeNumeros);
    vector<int> numerosPares;
    vector<int> numerosImpares;

    for (int i = 0; i < quantidadeNumeros; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < quantidadeNumeros; i++) {
        if (numeros[i] % 2 == 0) {
            numerosPares.push_back(numeros[i]);
        } else {
            numerosImpares.push_back(numeros[i]);
        }
    }

    sort(numerosPares.begin(), numerosPares.end());
    sort(numerosImpares.begin(), numerosImpares.end(), greater<int>());

    for (int n : numerosPares) cout << n << endl;
    for (int n : numerosImpares) cout << n << endl;
}