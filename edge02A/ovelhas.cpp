#include <bits/stdc++.h>
using namespace std;

string contagem(int n) {
    if (n == 0) {
        return "INSOMNIA";
    }
    int i = 1;
    unordered_set<char> digitosencontrados;
    while (digitosencontrados.size() < 10) {
        int numero_atual = n * i;
        string numero_str = to_string(numero_atual);
        for (char c : numero_str) {
            digitosencontrados.insert(c);
        }
        if (numero_atual > 99999) {
            return "INSOMNIA";
        }
        i++;
    }
    return to_string(n * (i - 1));
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << "Case #" << i + 1 << ": "; 
        cout << contagem(n) <<endl;


    }
    
    
    return 0;
}
