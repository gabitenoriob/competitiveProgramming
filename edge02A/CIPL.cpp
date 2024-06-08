#include <bits/stdc++.h>
using namespace std;

string trocarMetades(string str) {
    int length = str.length();
    int meio = length / 2;

    string primeiraMetade = str.substr(0, meio);
    string segundaMetade = str.substr(meio);

    return segundaMetade + primeiraMetade;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nQueries;
    cin >> nQueries;
    cin.ignore(); 

    for (int i = 0; i < nQueries; ++i) {
        // ler cada consulta
        int t, a, b;
        cin >> t >> a >> b;

        if (t == 1) {
            --a;
            --b;
            char aux = s[a];
            s[a] = s[b];
            s[b] = aux;
        } else {
            s = trocarMetades(s);
        }
    }

    cout << s << endl;
    
    return 0;
}
