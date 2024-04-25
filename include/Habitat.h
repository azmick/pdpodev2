#include <Bocek.h>
#include <Bitki.h>
#include <Sinek.h>
#include <Pire.h>

struct HABITAT
{
    void(*elemeSonrasi);
    void(*elemeBaslat);
    void(*yoket);
};

typedef struct HABITAT *Habitat;

Habitat habitatOlustur();
void elemeSonrasi(Habitat);
void elemeBaslat(Habitat, const char *dosyaAdi);
void elemeYokEt(Habitat);
