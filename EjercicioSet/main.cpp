//
// Created by Tsuki on 27/6/2018.
//

#include "Set.h"

int main() {
    printSet(emptyS());

    Set s = singleton(1);
    addS(2, s);
    addS(3, s);
    addS(6, s);

    printSet(s);

    removeS(6, s);
    printSet(s);
    removeS(2, s);
    printSet(s);
    removeS(1, s);
    printSet(s);
    removeS(3, s);
    printSet(s);

    return 0;
}