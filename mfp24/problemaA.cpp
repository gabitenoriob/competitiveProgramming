#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int N, p;
    cin >> N >> p;

    vector<int> tempos(N);
    for (int i = 0; i < N; ++i) {
        cin >> tempos[i];
    }

    int tempo = accumulate(tempos.begin(), tempos.end(), 1, mmc);
    int tempo_total = (tempo * N) / p;

    cout << tempo_total << endl;

    return 0;
}
