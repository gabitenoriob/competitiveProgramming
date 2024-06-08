#include <bits/stdc++.h>
using namespace std;
/*Por exemplo, o caractere A, que é 65 em ASCII,
normalmente seria armazenado como o byte 01000001,
mas nossos computadores o armazenam como OIOOOOOI.*/

int ioParaInteiro(const string &bits)
{
    int valor = 0;
    for (char c : bits)
    {
        valor = valor * 2 + (c == 'I' ? 1 : 0);
    }
    return valor;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cin.ignore();

        string input;
        getline(cin, input);

        string resultado = "";

        // a cada 8 caracteres
        for (int j = 0; j < input.size(); j += 8)
        {
            if (j + 8 <= input.size())
            { 
                string byte_str = input.substr(j, 8);
                int byte_val = ioParaInteiro(byte_str);
                resultado += static_cast<char>(byte_val);
            }
        }

        cout << "Case #" << i + 1 << ": " << resultado << endl;
    }

    return 0;
}
