#ifndef BITKI_H
#define BITKI_H

#include <Canli.h>

struct BITKI
{
    Canli super;
    char *isim;
    void (*CanliYokEt)(struct BITKI *);
};

typedef struct BITKI *Bitki;
Bitki BitkiOlustur(int, char *);
void BitkiYokEt(const Bitki);

#endif