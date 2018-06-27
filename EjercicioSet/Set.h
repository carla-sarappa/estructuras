//
// Created by Tsuki on 27/6/2018.
//
#include <iostream>

#define ELEM_TYPE int

using namespace std;

struct SetNode;
typedef SetNode *Set;

Set emptyS();

Set singleton(ELEM_TYPE x);

bool belongs(ELEM_TYPE x, Set s);

void addS(int x, Set &s);

void removeS(int x, Set &s);

int size(Set s);

Set unionS(Set s1, Set s2);

Set insersectS(Set s1, Set s2);

//List setToList(Set s);
void destroySet(Set &s);

void printSet(Set s);
