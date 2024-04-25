#include <Habitat.h>
#include <Bocek.h>
#include <Bitki.h>
#include <Sinek.h>
#include <Pire.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Habitat habitatOlustur()
{
    Habitat this;
    this = (Habitat)malloc(sizeof(struct HABITAT));
    this->elemeBaslat = &elemeBaslat;
    // this->elemeSonrasi = &elemeSonrasi;
    //  this->yoket = &elemeYokEt;
    return this;
};

void habitataEkle(Habitat habitat, int canliDeger)
{
    if (canliDeger >= 1 && canliDeger <= 9)
    {
        Bitki b = BitkiOlustur(canliDeger, "B");
        printf("%s ", b->isim);
    }
    else if (canliDeger >= 10 && canliDeger <= 20)
    {
        Bocek c = BocekOlustur(canliDeger, "C");
        printf("%s ", c->isim);
    }
    else if (canliDeger >= 21 && canliDeger <= 50)
    {
        Sinek s = SinekOlustur(canliDeger, "S");
        printf("%s ", s->isim);
    }
    else if (canliDeger >= 51 && canliDeger <= 99)
    {
        Pire p = PireOlustur(canliDeger, "P");
        printf("%s ", p->isim);
    }
}

void elemeBaslat(Habitat this, const char *dosyaAdi)
{
    FILE *dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL)
    {
        printf("Dosya acilamadi.\n");
        return;
    }

    int canliDeger;
    while (fscanf(dosya, "%d", &canliDeger) != EOF)
    {
        habitataEkle(this, canliDeger);
    }

    fclose(dosya);
}

// void habitatYokEt(Habitat this)
// {
//     free(this);
// }
