#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> codigo(8);
    int qntd_uns = 0;


    for (int i = 0; i < 8; ++i) {
        cin >> codigo[i];
        if (codigo[i] == 1) {
            qntd_uns++;
        }
    }

   
    bool paridade_correta = (qntd_uns % 2 == 0);
    
    if (codigo[7] == 0 && paridade_correta) {
        cout << "N?" << endl; // A mensagem certamente foi corrompida
    } else if (codigo[7] == 0 && !paridade_correta) {
        cout << "S" << endl; // A mensagem certamente foi corrompida
    } 
    else if( codigo[7] == 1 && !paridade_correta){
        cout << "N?" << endl;
    }
    else {
        cout << "S" << endl; // Não podemos concluir com certeza
    }

    return 0;
}
