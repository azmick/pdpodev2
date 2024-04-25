#ifndef PIRE_H
#define PIRE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Bocek.h>

struct PIRE
{
    Bocek super;
    char *isim;
    void (*CanliYokEt)(struct PIRE *);
};

typedef struct PIRE *Pire;
Pire PireOlustur(int, char *);
void PireYokEt(const Pire);

#endif
