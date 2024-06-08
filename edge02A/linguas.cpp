#include <bits/stdc++.h>
using namespace std;
/*

ejp mysljylc kd kxveddknmc re jsicpdrysi
rbcpc ypc rtcsra dkh wyfrepkym veddknkmkrkcd
de kr kd eoya kw aej tysr re ujdr lkgc jv


Case #1: our language is impossible to understand
Case #2: there are twenty six factorial possibilities
Case #3: so it is okay if you want to just give up*/
int main()
{
    //mapeando pegando o exemplo dado 
    unordered_map<char, char> googlerese_to_english = {
        {'a', 'y'}, {'b', 'h'}, {'c', 'e'}, {'d', 's'}, {'e', 'o'},
        {'f', 'c'}, {'g', 'v'}, {'h', 'x'}, {'i', 'd'}, {'j', 'u'},
        {'k', 'i'}, {'l', 'g'}, {'m', 'l'}, {'n', 'b'}, {'o', 'k'},
        {'p', 'r'}, {'q', 'z'}, {'r', 't'}, {'s', 'n'}, {'t', 'w'},
        {'u', 'j'}, {'v', 'p'}, {'w', 'f'}, {'x', 'm'}, {'y', 'a'},
        {'z', 'q'}, {' ', ' '} 
    };

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string input;
        getline(cin, input); 

        string resultado = ""; 

    
        for (char c : input)
        {
            resultado += googlerese_to_english[c];
        }

    
        cout << "Case #" << i << ": " << resultado << endl;
    }

    return 0;
}
