#include "Set.h"

struct SetNode {
    ELEM_TYPE elem;
    SetNode *next;
};

Set emptyS() {
    return NULL;
}

Set singleton(ELEM_TYPE x) {
    SetNode *node = new SetNode;
    node->elem = x;
    node->next = NULL;
    return node;
}

bool belongs(ELEM_TYPE x, Set s) {
    while (s != NULL) {
        if (s->elem == x) { return true; }
        s = s->next;
    }
    return false;
}

Set addS(ELEM_TYPE x, Set s) {
    if (belongs(x, s)) {
        return s;
    }

    SetNode *newNode = singleton(x);
    newNode->next = s;
    return newNode;
}

Set removeS(ELEM_TYPE x, Set s) {
    if (!belongs(x, s)) { return s; }

    Set principio = s;
    Set anterior = NULL;
    Set actual = s;

    while (actual->elem != x) {
        anterior = actual;
        actual = actual->next;
    }

    SetNode *tmp;
    if (anterior == NULL) {
        tmp = actual->next;
        delete actual;
        return tmp;
    }

    anterior->next = actual->next;
    delete actual;
    return principio;
}

Set unionS(Set s1, Set s2) {
    while (s2 != NULL) {
        s1 = addS(s2->elem, s1);
        s2 = s2->next;
    }
    return s1;
}

Set insersectS(Set s1, Set s2) {
    Set s3 = emptyS();
    while (s1 != NULL) {
        if (belongs(s1->elem, s2)) {
            s3 = addS(s1->elem, s3);
        }
        s1 = s1->next;
    }
    return s3;
}

List setToList(Set s) {
    List xs = Nil();
    while (s != NULL) {
        xs = Cons(s->elem, xs);
        s = s->next;
    }
    return xs;
}

void destroyS(Set &s) {
    while (s != NULL) {
        Set tmp = s;
        s = s->next;
        delete tmp;
    }
    s = NULL;
}

void printSet(Set s) {
    if (s == NULL) {
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
