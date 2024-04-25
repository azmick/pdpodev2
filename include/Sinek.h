#ifndef SINEK_H
#define SINEK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Bocek.h>

struct SINEK
{
    Bocek super;
    char *isim;
    void (*CanliYokEt)(struct SINEK *);
};

typedef struct SINEK *Sinek;
Sinek SinekOlustur(int, char *);
void SinekYokEt(const Sinek);

#endif
