#include <bits/stdc++.h>
using namespace std;

float calcular_dist_pontos(float ponto1, float ponto2){

    float distancia = abs(ponto2 - ponto1);
    return distancia;
}

int main() {
    float X1,X2,M1,M2,F;
    cin >> M1 >> M2;
    cin >> X1 >> X2;
    cin >> F;

   float distancia = calcular_dist_pontos(X1,X2);
   float D = distancia * distancia;
   float M = M1 * M2;

   float G = (D * F) / M;

   cout << setprecision(10) << fixed << G << endl;

}