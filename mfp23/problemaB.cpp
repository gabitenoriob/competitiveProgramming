#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void quicksort(vector<int>& arr, int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    int pivot = arr[mid];
    swap(arr[mid], arr[l]);
    int i = l + 1, j = r;
    while (i <= j) {
        while (i <= j && arr[i] <= pivot) i++;
        while (i <= j && arr[j] > pivot) j--;
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[i - 1], arr[l]);
    quicksort(arr, l, i - 2);
    quicksort(arr, i, r);
}

vector<int> quicksort(vector<int> alturas, int N) {
    quicksort(alturas, 0, N - 1);
    return alturas;
}

int main() {
    int N;
    cin >> N;
    vector<int> alturas(N);

    for (int i = 0; i < N; ++i) {
        cin >> alturas[i];
    }

    int num_pares = N/2;

    alturas = quicksort(alturas, N);

    // Limpa o vetor de médias e ajusta seu tamanho
    vector<int> medias;
    medias.reserve(num_pares);

    
    for (int i = 0; i < num_pares; ++i) {
        int media = (alturas[i] + alturas[N - i - 1]) / 2;
        medias.push_back(media);
    }

    
    if (!medias.empty()) {
        auto i_maior = max_element(medias.begin(), medias.end());
        int maior = *i_maior;
        cout << maior;
    } else {
        cout << "Vetor de médias vazio!";
    }

    return 0;
}