#include <bits/stdc++.h>
using namespace std;
int main() {
//a = m2 - n2, 
//b = 2mn, 
//c = m2 + n2

int m,n;
cin >> m >> n;

int a = (m* m) - (n * n);
int b = 2 * m * n;
int c =  (m* m) + (n * n);
cout << a << " " << b << " " << c << endl;

}
