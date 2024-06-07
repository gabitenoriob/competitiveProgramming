#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculando o tamanho do vetor de moedas
    int tamanho = (1 << N) - 1;

    // Lendo as moedas
    vector<int> moedas(tamanho);
    for (int i = 0; i < tamanho; ++i) {
        cin >> moedas[i];
    }

    int sum = 0;
    int pos = 0;

    while (pos < tamanho) {
        // Adicionando as moedas do posto atual a sum
        sum += moedas[pos];

        // Verificando se chegamos ao limite de postos
        if (pos >= tamanho) {
            break;
        }

        // Calculando as próximas posições possíveis
        int leftChild = 2 * pos + 1;
        int rightChild = 2 * pos + 2;

        // Atualizando a posição para o próximo posto com mais moedas
        if (rightChild >= tamanho || moedas[leftChild] > moedas[rightChild]) {
            pos = leftChild;
        } else {
            pos = rightChild;
        }
    }

    // Imprimindo o resultado
    cout << sum << endl;

    return 0;
}
