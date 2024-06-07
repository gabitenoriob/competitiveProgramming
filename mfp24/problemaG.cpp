#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int n, pontuacao1 = 0, pontuacao2 = 0;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string anotacao;
        getline(cin, anotacao);

        char time = anotacao[5]; 
        int num_time = time - '0';

        istringstream iss(anotacao.substr(7)); 
        int pontuacao;
        iss >> pontuacao; 

        
        if (num_time == 1) {
            pontuacao1 += pontuacao;
        } else if (num_time == 2) {
            pontuacao2 += pontuacao;
        }
    }

    cout << pontuacao1 << " x " << pontuacao2 << endl;
    
    return 0;
}
