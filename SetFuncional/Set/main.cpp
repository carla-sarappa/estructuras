#include <iostream>
#include "Set.h"

using namespace std;

int main() {
    Set s1 = emptyS();
    s1 = addS(1, s1);
    s1 = addS(2, s1);
    s1 = addS(3, s1);

    Set s2 = emptyS();
    s2 = addS(4, s2);
    s2 = addS(5, s2);
    s2 = addS(6, s2);

    s1 = unionS(s1, s2);

    s1 = removeS(4, s1);

    printSet(s1);

    return 0;
}
