#include <iostream>
#include "FunctionalLinkedLists/FunctionalLinkedLists.h"

#define ELEM_TYPE int

using namespace std;

struct SetNode;

typedef SetNode *Set;

Set emptyS();

Set singleton(ELEM_TYPE x);

bool belongs(ELEM_TYPE x, Set s);

Set addS(ELEM_TYPE x, Set s1);

Set removeS(ELEM_TYPE x, Set s1);

Set unionS(Set s1, Set s2);

Set insersectS(Set s1, Set s2);

List setToList(Set s);

void destroyS(Set &s);

void printSet(Set s);
