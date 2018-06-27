//
// Created by Tsuki on 27/6/2018.
//

#include "Set.h"

struct SetNode {
    ELEM_TYPE elem;
    SetNode *next;
};

Set emptyS() {
    return NULL;
}

Set singleton(ELEM_TYPE x) {
    Set node = new SetNode;
    node->elem = x;
    node->next = NULL;
    return node;
}

bool belongs(ELEM_TYPE x, Set s) {
    for (Set node = s; node != NULL; node = node->next) {
        if (x == node->elem) {
            return true;
        }
    }
    return false;
}

void addS(int x, Set &s) {
    if (not belongs(x, s)) {
        Set node = singleton(x);
        node->next = s;
        s = node;
    }
}

void removeS(int x, Set &s) {
    Set *anterior = &s;
    for (Set node = s; node != nullptr; node = node->next) {
        if (x == node->elem) {
            *anterior = node->next;
            delete (node);
            return;
        }
        anterior = &(node->next);
    }
}

void removeSOld(int x, Set &s) {
    if (s == NULL) return;

    if (s != NULL && s->elem == x) {
        Set r = s->next;
        delete (s);
        s = r;
        return;
    }

    Set anterior = s;
    for (Set node = s->next; node != NULL; node = node->next) {
        if (x == node->elem) {
            anterior->next = node->next;
            delete (node);
            return;
        }
        anterior = node;
    }
}

int size(Set s) {

}

Set unionS(Set s1, Set s2) {

}

Set insersectS(Set s1, Set s2) {

}

//List setToList(Set s);

void destroySet(Set &s) {

}

void printSet(Set s) {
    if (not s) {
        cout << "{}" << endl;
    } else {
        cout << "{ ";
        while (s->next != NULL) {
            cout << s->elem << ", ";
            s = s->next;
        }
        cout << s->elem << " }" << endl;
    }
}