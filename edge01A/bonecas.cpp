/*Um colecionador possui pares de bonecas. Porém uma sumiu da coleção. Você consegue descobrir qual?

Formato de entrada

A primeira linha é o número de casos de teste T. T casos seguem.

Para cada caso de teste, temos uma linha com a quantidade de bonecas N. N linhas seguem, cada qual com o tipo de cada boneca presente atualmente na coleção.

Formato de saída

Imprima o tipo da boneca que não possui par.

Exemplos de:

Entrada

1 t
3 n
1 boneca tipo 1
2 boneca tipo 2
1 boneca tipo 1
Saída
2 boneca sem par*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // número de casos de teste
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n; // número de bonecas por teste
        cin >> n;
        vector<int> bonecas(n); // vetor de bonecas

        for (int j = 0; j < n; j++) { // ler todas as bonecas e colocar no vetor
            cin >> bonecas[j];
        }

        for (int i = 0; i < n; i++) {
            int par = bonecas[i];
            for (int j = 0; j < n; j++) {
                if (par == bonecas[j] && i != j && bonecas[i] != -1 && bonecas[j] != -1) {
                    bonecas[i] = -1;
                    bonecas[j] = -1;
                }
            }
        }

        // Procurar e imprimir a boneca que não está em par
        for (int i = 0; i < n; i++) {
            if (bonecas[i] != -1) {
                cout << bonecas[i] << endl;
                break;
            }
        }
    }

    return 0;
}

/*PODERIA FAZER UM VETOR COUNT E CONTAR TODA VEZ NA POSIÇÃO DO TIPO ex: bonecas[tipo]++, a posição q fosse < 2 = nao tem par*/

