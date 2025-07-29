#include <iostream>
#include "packages/scan/scan.hpp"

int main() {
    
    Scan *sc = new Scan();

    short shortNumber = sc->scanShort("join a short number: ");
    int integerNumber = sc->scanInt("join a int number: ");

    delete sc;

    return 0;
}