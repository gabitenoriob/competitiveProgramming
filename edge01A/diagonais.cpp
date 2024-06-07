/*Descrição
Dada duas matrizes quadradas de mesmo tamanho, cada qual com lado de tamanho L (onde L > 1), realize a soma dos elementos da diagonal principal da matriz 1 e da diagonal principal da matriz 2 rotacionada 90º para a direita.

Formato de entrada

Duas matrizes quadradas de mesmo tamanho e de lado L, onde L > 1, e informadas em linhas separadas. Os elementos dessas matrizes são números inteiros.

Formato de saída

Um número inteiro representando a soma dos elementos da diagonal principal da primeira matriz mais os elementos da diagonal principal da segunda matriz rotacionada para a direita 90º

Exemplos de:

Entrada


[[2,2],[2,2]]
[[2,2],[2,2]]

Saída
8*/

#include <bits/stdc++.h>
using namespace std;

// Função para rotacionar a matriz 90 graus para a direita
vector<vector<int>> rotate90Degrees(const vector<vector<int>>& matrix) {
    int L = matrix.size();
    vector<vector<int>> rotated(L, vector<int>(L));

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            rotated[j][L - 1 - i] = matrix[i][j];
        }
    }

    return rotated;
}

// Função para calcular a soma da diagonal principal
int sumMainDiagonal(const vector<vector<int>>& matrix) {
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Função para ler uma matriz a partir de uma string
vector<vector<int>> readMatrix(const string& line) {
    vector<vector<int>> matrix;
    stringstream ss(line);
    char ch;
    int num;
    vector<int> row;

    while (ss >> ch) {
        if (ch == '[' || ch == ']' || ch == ',') {
            continue;
        } else {
            ss.putback(ch);
            ss >> num;
            row.push_back(num);
            if (ss.peek() == ']' || ss.peek() == ',') {
                if (!row.empty()) {
                    matrix.push_back(row);
                    row.clear();
                }
            }
        }
    }
    return matrix;
}

int main() {
    string line1, line2;

    // Leitura das duas linhas que representam as matrizes
    getline(cin, line1);
    getline(cin, line2);

    // Leitura das matrizes a partir das strings
    vector<vector<int>> matrix1 = readMatrix(line1);
    vector<vector<int>> matrix2 = readMatrix(line2);

    // Soma da diagonal principal da matriz 1
    int sum1 = sumMainDiagonal(matrix1);

    // Rotaciona a matriz 2 90 graus para a direita
    vector<vector<int>> rotatedMatrix2 = rotate90Degrees(matrix2);

    // Soma da diagonal principal da matriz rotacionada
    int sum2 = sumMainDiagonal(rotatedMatrix2);

    // Soma total
    int totalSum = sum1 + sum2;

    cout << totalSum << endl;

    return 0;
}

/*def rotate90Degrees(matrix):
    L = len(matrix)
    return [[matrix[L - 1 - j][i] for j in range(L)] for i in range(L)]

def sumMainDiagonal(matrix):
    return sum(matrix[i][i] for i in range(len(matrix)))

def readMatrix(line):
    return eval(line)

def main():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    line1 = data[0]
    line2 = data[1]

    matrix1 = readMatrix(line1)
    matrix2 = readMatrix(line2)

    sum1 = sumMainDiagonal(matrix1)
    rotatedMatrix2 = rotate90Degrees(matrix2)
    sum2 = sumMainDiagonal(rotatedMatrix2)

    totalSum = sum1 + sum2
    print(totalSum)

if __name__ == "__main__":
    main()
*/