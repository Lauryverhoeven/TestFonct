#include <iostream>
#include "demander_nombre.h"
#include "factorielleIterative.h"
using namespace std;


int main() {
    char r;
    do {
        int n;
        n = demander_nombre();
        int f;
        f = factorielle(n);
        cout << "Méthode itérative : " << n << "! = " << f << endl;
        cout << "Voulez vous recommencer ? [o/n]";
        cin >> r;

    } while(r == 'o');

    return 0;
}
