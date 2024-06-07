/*Considere uma matriz quadrada de lado L, onde L > 1, onde as linhas são numeradas de cima para baixo a partir de 1 e as colunas são numeradas da esquerda para a direita a partir de 1. As coordenadas nessa matriz são compostas pelo número da linha e da coluna. Por exemplo, a coordenada (3,5) é localizada na 3ª linha e 5ª coluna.

Agora, considere uma sequência de coordenadas nessa matriz. Sua tarefa é imprimir a sequência espelhada dessas coordenadas, como se houvesse um espelho no lado direito dessa matriz, usando as seguintes regras:

Movimentos para cima e para baixo não se alteram na matriz espelhada.
Movimentos para os lados direito e esquerdo se invertem na matriz espelhada.
O formato da entrada é o tamanho do de um dos lados da matriz quadrada em uma linha e a sequência de coordenadas na linha seguinte, onde cada coordenada é informada entre parênteses (veja o exemplo da entrada). A saída deve ser a sequência de coordenadas espelhadas.
Formato de entrada

Um valor inteiro na primeira linha representando a quantidade de linhas ou colunas da matriz quadrada de lado L, onde L > 1, e uma sequência de coordenadas (mínimo de 1 coordenada).

Formato de saída

Sequência de coordenadas espelhadas.

Exemplos de:

Entrada


3
(1,3),(2,2),(3,3)

Saída


(1,1),(2,2),(3,1)*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    cin >> L;

    string input;
    getline(cin, input); // Lê a linha de coordenadas

    vector<pair<int, int>> coordinates;
    stringstream ss(input);
    char ignore;
    int x, y;

    // Extrai as coordenadas do input
    while (ss >> ignore >> x >> ignore >> y >> ignore)
    {
        coordinates.push_back({x, y});
    }

    // Processa e imprime as coordenadas espelhadas
    for (const auto &coord : coordinates)
    {
        int mirrored_y = L - coord.second + 1;
        cout << "(" << coord.first << "," << mirrored_y << ")";
        if (&coord != &coordinates.back())
        {
            cout << ",";
        }
    }

    return 0;
}
