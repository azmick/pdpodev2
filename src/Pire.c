#include <Pire.h>

Pire PireOlustur(int canliDeger, char *isim)
{
    Pire this;
    this = (Pire)malloc(sizeof(struct PIRE));
    this->isim = (char *)malloc(strlen(isim) + 1);
    if (this->isim == NULL)
    {
        // Bellek hatası
        free(this);
        return NULL;
    }
    strcpy(this->isim, isim);
    this->super = BocekOlustur(canliDeger, isim);
    this->CanliYokEt = &PireYokEt;

    return this;
};

void PireYokEt(const Pire this)
{
    if (this == NULL)
        return;
    this->super->CanliYokEt(this->super);
    free(this->isim);
    free(this);
};