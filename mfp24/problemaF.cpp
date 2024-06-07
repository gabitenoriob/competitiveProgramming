#include <bits/stdc++.h>
using namespace std;
int main() {

int n;
cin >> n;

if(n == 2 || n == 1 || n == 4 || n == 8){
    cout << "1" << endl;
}
else if(n == 15){
    cout << "4" << endl;
}
else if(n == 3 || n== 9 || n == 5 || n == 6 || n == 10 || n == 12){
    cout << "2" << endl;
}
else if(n == 7 || n == 11 || n == 13 || n == 14 ){
    cout << "3" << endl;
}




}
