#include <bits/stdc++.h>
using namespace std;
/*calcular o número mínimo de amigos que você deve convidar para garantir que todos na plateia se levantem e batam palmas no final,
 seguindo as regras de timidez*/
int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        int smax;
        cin >> smax;
        cin.ignore();

        string pessoas;
        getline(cin, pessoas);
        int n = pessoas.size();
        vector<int> contagem(n);
        int amigos = 0; 
        int emPe = 0;

        for (int i = 0; i <= smax; ++i) {
            int timidos = pessoas[i] - '0';

            if (timidos > 0 && emPe < i) {
                int friends_needed = i - emPe;
                amigos += friends_needed;
                emPe += friends_needed;
            }

            emPe += timidos;
        }

        cout << "Case #" << i << ": " << amigos << endl;
    }

    return 0;
}
