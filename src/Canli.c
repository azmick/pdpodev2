#include <Canli.h>

Canli CanliOlustur(int canliDeger)
{
    Canli this;
    this = (Canli)malloc(sizeof(struct CANLI));
    this->canliDeger = canliDeger;
    // this->CanliDegerKiyas = &CanliDegerKiyas;
    this->CanliYokEt = &CanliYokEt;
    this->EsitMi = &EsitMi;
    this->DegerGetir = &DegerGetir;
    return this;
};

boolean EsitMi(const Canli this, const Canli dgr)
{
    if (this == NULL || dgr == NULL)
        return false;
    return this->canliDeger == dgr->canliDeger;
};
void CanliYokEt(const Canli this)
{
    if (this == NULL)
        return;
    free(this);
};
void DegerGetir(const Canli this)
{
    if (this == NULL)
        return;
    printf("Canli deger: %d\n");
}
