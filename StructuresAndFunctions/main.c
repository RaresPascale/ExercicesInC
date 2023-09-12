#include <stdio.h>

struct Rectangle // se creeaza structura
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b) //functia prin care initializam parametrii
                                                   // apelare prin adresare cu pointer la structura
{
    r->length = l;
    r->breadth = b;
}

int area (struct Rectangle r) // calculul ariei, prin adresare directa, se face cu punct
{
    return r.length * r. breadth;
}


void changeLength(struct Rectangle *r, int l)  // schimbarea lungimii se face cu pointer apelare prin adresa
{
    r->length = l;
}

int main() {
    struct Rectangle r; // initializam structura in main

    // se apeleaza fiecare functie
    initialise (&r, 10, 5);
    area(r);
    changeLength(&r,20);

    return 0;
}
