#include <bits/stdc++.h>
using namespace std;
int main() {
int x1,y1,x2,y2,x3,y3,x4,y4;

//ta ok com numeros positivos

cin >> x1 >> y1;
cin >> x2 >> y2;
cin >> x3 >> y3;
cin >> x4 >> y4;

int ladox = abs(x1 - x2);
if( x1 == x2){
    ladox = abs(x1 - x3);
}
int ladoy = abs(y1 - y2);
if(y1 == y2){
    ladoy = abs(y1 - y3);
}

int area = ladox*ladoy;

cout << area << endl;

}
