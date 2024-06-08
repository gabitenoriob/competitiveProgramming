#include <bits/stdc++.h>
using namespace std;
/*calcular o número mínimo de amigos que você deve convidar para garantir que todos na plateia se levantem e batam palmas no final,
 seguindo as regras de timidez*/
 
int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        int n,ts,tf;
        cin >> n >> ts >> tf;
        //n = qnts cidades, ts = tempo por cidade tf = hora que deve chegar na cidade numero N
        //4 3 12
        for (int j = 0; j < n-1; j++)
        {
            int si, fi,di;
            cin >> si >> fi >> di;
            //inicio hr, frequencia, e duração viagem de i para i + 1
           //3 2 1 - 6 2 2 - 1 3 2
           
            int max_cidades = 0;



            cout << "Case #" << i << ": " << max_cidades << endl;
        }
        

    }

    return 0;
}
