/* File: mesinkar.h */
/* Definisi Mesin Karakter */

#ifndef __MESIN_KAR_H_
#define __MESIN_KAR_H_

#include "boolean.h"

#define MARK '*'
#define BLANK ' '
#define ENTER '\n'

/* State Mesin */
extern char CC;
extern boolean EOP;

void START(char *filename);
/* Mesin siap dioperasikan. Pita dengan nama namafile disiapkan untuk dibaca.
   Karakter pertama yang ada pada pita posisinya adalah pada jendela.
   I.S. : namafile adalah namafile file eksternal yang ingin diakses
   F.S. : CC adalah karakter pertama pada pita. Jika CC != MARK maka EOP akan padam (false).
          Jika CC = MARK maka EOP akan menyala (true) */

void ADV();
/* Pita dimajukan satu karakter.
   I.S. : Karakter pada jendela = CC, CC != MARK
   F.S. : CC adalah karakter berikutnya dari CC yang lama,
          CC mungkin = MARK
          Jika  CC = MARK maka EOP akan menyala (true) */

#include "mesinkar.c"
#endif
