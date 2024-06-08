#include <bits/stdc++.h>
using namespace std;
/*calcular infelicidade minima = quando 2 ocupados tema  msm parede
Entrada


4
2 3 6
4 1 2
3 3 8
5 2 0
Saída


Case #1: 7
Case #2: 0
Case #3: 8
Case #4: 0*/
int contar_adjascencias(const vector<vector<int>> &matrix, int rows, int cols)
{
    int count = 0;

    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols - 1; j++)
        {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1)
            {
                count++;
            }
        }
    }

    // Verificar adjacências na vertical
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows - 1; i++)
        {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r, c, n;
        cin >> r >> c >> n;
        // rxc sao apt por andar linha por coluna
        // deseja alocar n

        cout << "Case #" << i + 1 << ": ";
        // 1 caso = n = r x c e pontos = r x c
        // 2 caso n = 0
        if (n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            // construir uma matriz r*c e tentar alocar os n pontos de maneira que os pontos adjascentes sejam o minimo possivel, e depois somar todas as adjascencias
            vector<vector<int>> matrix(r, vector<int>(c, 0));

            if (r * c == n)
            {
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        matrix[i][j] = 1;
                    }
                }

                // contar "arestas"
                int resu = contar_adjascencias(matrix, r, c);
                cout << resu << endl;
            }
            else{
                //guloso p alocar os vizinhos de maneira a reduzir os vizinhos e dps contar os vizinhos

            }
        }
    }
}
