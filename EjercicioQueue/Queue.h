//
// Created by Tsuki on 27/6/2018.
//
#include <iostream>

#define ELEM_TYPE int

using namespace std;

struct QueueStr;
typedef QueueStr *Queue;

Queue emptyQ();

bool isEmptyQ(Queue q);

void queue(Queue &q, int x);

int firstQ(Queue q);

void dequeue(Queue &q);

Queue copiar(Queue q);

void destroyQ(Queue &q);
