/* File : stackt.c */
/* Implementasi stack dengan tabel kontigu dan ukuran sama */
/* Implementasi dalam bahasa C dengan alokasi statik */
#include "boolean.h"
#include "stackt.h"

/* ************ Prototype ************ */
/* *** Konstruktor/Kreator *** */
void CreateEmptyStack (Stack *S) {
/* I.S. sembarang; */
/* F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl */
/* jadi indeksnya antara 1.. MaxEl+1 karena 0 tidak dipakai */
/* Ciri stack kosong : TOP bernilai Nil */
  Top(*S) = NilS;
}

/* ************ Predikat Untuk test keadaan KOLEKSI ************ */
boolean IsStackEmpty (Stack S) {
/* Mengirim true jika Stack kosong: lihat definisi di atas */
  return (Top(S)==NilS);
}

boolean IsStackFull (Stack S) {
/* Mengirim true jika tabel penampung nilai elemen stack penuh */
  return (Top(S)==MaxStackEl);
}

/* ************ Menambahkan sebuah elemen ke Stack ************ */
void Push (Stack * S, infoS X) {
/* Menambahkan X sebagai elemen Stack S. */
/* I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh */
/* F.S. X menjadi TOP yang baru,TOP bertambah 1 */
  Top(*S)++;
  InfoTop(*S) = X;
}

/* ************ Menghapus sebuah elemen Stack ************ */
void Pop (Stack * S, infoS* X) {
/* Menghapus X dari Stack S. */
/* I.S. S  tidak mungkin kosong */
/* F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */
  *X = InfoTop(*S);
  Top(*S)--;
}
