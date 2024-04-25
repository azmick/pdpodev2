#include <Bitki.h>
#include <stdlib.h>

Bitki BitkiOlustur(int canliDeger, char *isim)
{
    Bitki this;
    this = (Bitki)malloc(sizeof(struct BITKI));
    // İsim için bellek ayır ve kopyala
    this->isim = (char *)malloc(strlen(isim) + 1);
    if (this->isim == NULL)
    {
        // Bellek hatası
        free(this);
        return NULL;
    }
    strcpy(this->isim, isim);
    this->super = CanliOlustur(canliDeger);
    this->CanliYokEt = &BitkiYokEt;
    return this;
};

void BitkiYokEt(const Bitki this)
{
    if (this == NULL)
        return;
    this->super->CanliYokEt(this->super);
    free(this->isim);
    free(this);
};