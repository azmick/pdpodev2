#include <Sinek.h>

Sinek SinekOlustur(int canliDeger, char *isim)
{
    Sinek this;
    this = (Sinek)malloc(sizeof(struct SINEK));
    this->isim = (char *)malloc(strlen(isim) + 1);
    if (this->isim == NULL)
    {
        // Bellek hatası
        free(this);
        return NULL;
    }
    strcpy(this->isim, isim);
    this->super = BocekOlustur(canliDeger, isim);
    this->CanliYokEt = &SinekYokEt;
    return this;
};

void SinekYokEt(const Sinek this)
{
    if (this == NULL)
        return;
    this->super->CanliYokEt(this->super);
    free(this->isim);
    free(this);
};