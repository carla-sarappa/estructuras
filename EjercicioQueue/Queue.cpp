//
// Created by Tsuki on 27/6/2018.
//

#include "Queue.h"

struct Nodo {
    ELEM_TYPE elem;
    Nodo *next;
};

struct QueueStr {
    Nodo *inicio;
    Nodo *fin;
};

Queue emptyQ() {
    return new QueueStr;
}

bool isEmptyQ(Queue q) {
    return (q->inicio == NULL);
}

void queue(Queue &q, int x) {
    Nodo *nodo = new Nodo;
    nodo->elem = x;

    if (isEmptyQ(q)) {
        q->inicio = nodo;
    } else {
        q->fin->next = nodo;
    }
    q->fin = nodo;

}

int firstQ(Queue q) {
    return q->inicio->elem;
}

void dequeue(Queue &q) {
    Nodo *tmp = q->inicio;
    q->inicio = q->inicio->next;
    delete (tmp);
}

Queue copiar(Queue q) {

}

void destroyQ(Queue &q);

