//
// Created by Laury Verhoeven on 25/2/2021.
//
#include "factorielleIterative.h"
using namespace std;

unsigned int factorielle(unsigned int n) {
    int factorielle(1);
    int m(n);
    for(int i(0); i < m; ++i) {
        factorielle *= n;
        n -= 1;
    }
    return(factorielle);

}
