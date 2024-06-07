/*Descrição
Há um caixa eletrônico. Inicialmente, ele contém um total de K unidades monetárias. N pessoas (numeradas de 1 a N) desejam sacar dinheiro; para cada i válido, a i-ésima pessoa deseja sacar Ai​ unidades de dinheiro.

As pessoas entram e tentam sacar dinheiro uma a uma, na ordem crescente de seus índices. Sempre que alguém tentar sacar dinheiro, se a máquina tiver pelo menos a quantia necessária, ela distribuirá a quantia necessária. Caso contrário, ele lançará um erro e não fornecerá nada; nesse caso, essa pessoa voltará para casa diretamente sem tentar fazer mais nada.

Para cada pessoa, determine se ela receberá a quantia necessária de dinheiro ou não.

Formato de entrada

A primeira possui T, o número de casos de teste. T casos seguem.

A primeira linha de cada caso possui dois valores, N e K. N denota a quantidade de pessoas que irão tentar sacar dinheiro. K é o total de dinheiro que a máquina possui disponível.

A segunda linha de cada caso contém N inteiros, que é a quantia que cada pessoa tenta sacar.

Formato de saída

Para cada caso de teste, imprima uma única linha contendo uma string com comprimento N. Para cada i válido, o i-ésimo caractere desta string deve ser '1' se a i-ésima pessoa retirar seu dinheiro com sucesso ou '0' caso contrário .

Exemplos de:

Entrada


2 T

5 10 N e K
3 5 3 2 1 N inteiros que sao os saques

4 6
10 8 6 4
Saída


11010 1 = pode 0 = nao pode
0010
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string resultado(n, '0');  // Inicializa a string resultado com '0's
        vector<int> saques(n);
        for (int j = 0; j < n; j++)
        {
            cin >> saques[j];
        }

        for (int j = 0; j < n; j++)
        {
            if (k >= saques[j])
            {
                resultado[j] = '1';
                k -= saques[j];
            }
            else
            {
                resultado[j] = '0';
            }
        }

        cout << resultado << endl;
    }
}
