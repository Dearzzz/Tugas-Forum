#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum KategoriBuku{
    Fiksi,
    Teks,
    Sejarah,
    novel,
    KategoriLain
} Kategori;

typedef enum PenerbitBuku{
    Grammedia,
    Elexmedia,
    AndiOffset,
    Pustaka,
    PenerbitLain
} Penerbit;

struct Buku{
    char ISBN [20];
    char Judul_Buku [100];
    char pengarang [100];
    int tahun_terbit;
    enum penerbit [100];
    enum kategori [100];
    int jumlah_tersedia;

};
void tampilankanbuku(struct buku ){

    printf("ISBN: %s\n", buku.ISBN);
    printf("Judul: %s\n", buku.judul);
    printf("Pengarang: %s\n", buku.pengarang);
    printf("Tahun Terbit: %d\n", buku.tahun_terbit);
    printf("Jumlah Tersedia: %d\n", buku.jumlah_tersedia);

     switch (buku.penerbit)
    {
    case Gramedia:
        printf("Penerbit: Gramedia\n");
        break;
    case Elexmedia:
        printf("Penerbit: Elexmedia\n");
        break;
    case Andi_Offset:
        printf("Penerbit: Andi Offset\n");
        break;
    case Pustaka:
        printf("Penerbit: Pustaka\n");
        break;
    }

    switch (buku.kategori)
    {
    case Fiksi:
        printf("Kategori: Fiksi\n");
        break;
    case Teks:
        printf("Kategori: Teks\n");
        break;
    case Sejarah:
        printf("Kategori: Sejarah\n");
        break;
    case Novel:
        printf("Kategori: Novel\n");
        break;
    }

    printf("\n");
}








int main(){

printf("hallo world");
    return 0;

}