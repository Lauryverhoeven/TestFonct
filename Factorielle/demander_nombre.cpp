//
// Created by Laury Verhoeven on 25/2/2021.
//

#include "demander_nombre.h"
#include <iostream>
using namespace std;

int demander_nombre() {
    int n;
    cout << "Entrez un entier compris entre 0 et 12 : ";
    cin >> n;
    return n;
}

