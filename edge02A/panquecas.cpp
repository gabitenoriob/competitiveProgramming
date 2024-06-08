#include <bits/stdc++.h>
using namespace std;
/*todas as panquecas estiverem com o lado feliz voltado para cima quando voc� as servir.*/

void flip(string& stack, int end) {
    int start = 0;
    while (start < end) {
        swap(stack[start], stack[end]);
        start++;
        end--;
    }
}

// encontrar o índice do último '-' na pilha
int temmenos(const string& panquecas) {
    for (int i = panquecas.size() - 1; i >= 0; i--) {
        if (panquecas[i] == '-') {
            return i;
        }
    }
    return -1; 
}

int virar(const string& panquecas) {
    int flips = 0;
    int currentIndex = 0; 
    string sortedStack = panquecas;
    
    while (temmenos(sortedStack) != -1) {
        int last = temmenos(sortedStack);
        flip(sortedStack, last);
        flips++;
        currentIndex = last; 
    }
    
    return flips;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string panquecas;
        getline(cin, panquecas);
        cout << "Case #" << i + 1 << ": ";
        cout << virar(panquecas) << endl;
    }

    return 0;
}

