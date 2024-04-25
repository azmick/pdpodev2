#ifndef CANLI_H
#define CANLI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum
{
    false,
    true
} boolean;

struct CANLI
{
    int canliDeger;
    void (*DegerGetir)(struct CANLI *);
    // void (*CanliDegerKiyas)(struct CANLI *, struct CANLI *);
    void (*CanliYokEt)(struct CANLI *);
    boolean (*EsitMi)(struct CANLI *, struct CANLI *);
};

typedef struct CANLI *Canli;

Canli CanliOlustur(int);
void DegerGetir(const Canli);
boolean EsitMi(const Canli, const Canli);
void CanliDegerKiyas(const Canli, const Canli);
void CanliYokEt(const Canli);

#endif
