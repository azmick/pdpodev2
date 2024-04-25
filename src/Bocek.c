#include <Bocek.h>

Bocek BocekOlustur(int canliDeger, char *isim)
{
    Bocek this;
    this = (Bocek)malloc(sizeof(struct BOCEK));
    this->isim = (char *)malloc(strlen(isim) + 1);
    if (this->isim == NULL)
    {
        // Bellek hatası
        free(this);
        return NULL;
    }
    strcpy(this->isim, isim);
    this->super = CanliOlustur(canliDeger);
    this->CanliYokEt = &BocekYokEt;

    return this;
};

void BocekYokEt(const Bocek this)
{
    if (this == NULL)
        return;
    this->super->CanliYokEt(this->super);
    free(this->isim);
    free(this);
};