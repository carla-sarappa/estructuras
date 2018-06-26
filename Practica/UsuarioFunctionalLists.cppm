//
// Created by Tsuki on 26/6/2018.
//
#include "../LinkedLists/FunctionalLinkedLists/FunctionalLinkedLists.h"

int sumar(List xs) {
    int suma = 0;
    List ls = xs;

    while (not isNil(ls)) {
        suma = suma + head(ls);
        ls = tail(ls);
    }
    return suma;
}

int sumar2(List xs) {

    List ls = xs;
    int y;
    int suma = 0;

    while (matchCons(ls, y, ls)) {
        suma = suma + y;
    }
    return suma;
}

int length(List xs) {
    int i = 0;
    for (int y = 0; matchCons(xs, y, xs); ++i);
    return i;
}

List mapSucc(List xs) {
    List result = Nil();
    for (int y = 0;
         matchCons(xs, y, xs);
         result = Snoc(result, y + 1)
            );
    return result;
}

List take(int n, List xs) {
    List result = Nil();
    for (int i = 0; i < n && not isNil(xs); ++i) {
        result = Snoc(result, head(xs));
        xs = tail(xs);
    }
    return result;
}

List take2(int n, List xs) {
    List result = Nil();
    int y;
    for (int i = 0; i < n && matchCons(xs, y, xs); ++i) {
        result = Snoc(result, y);
    }
    return result;
}

List drop(int n, List xs) {

    for (int i = 0; i < n && not isNil(xs); ++i) {
        xs = tail(xs);
    }
    return xs;
}

void ejercicio4() {

    List xs = Cons(1, Cons(2, Cons(3, Cons(4, Nil()))));

    cout << length(xs) << endl;

    cout << sumar(xs) << endl;
    cout << sumar2(xs) << endl;
    printList(mapSucc(xs));
    printList(xs);

    printList(take(2, xs));
    printList(take2(2, xs));
    printList(drop(2, xs));

}