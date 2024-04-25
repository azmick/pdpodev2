#ifndef BOCEK_H
#define BOCEK_H

#include <Canli.h>

struct BOCEK
{
    Canli super;
    char *isim;
    void (*CanliYokEt)(struct BOCEK *);
};

typedef struct BOCEK *Bocek;
Bocek BocekOlustur(int, char *);
void BocekYokEt(const Bocek);

#endif