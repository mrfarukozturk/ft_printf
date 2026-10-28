#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
typedef struct s_flags
{
    int minus;      // '-' bayrağı
    int zero;       // '0' bayrağı
    int hash;       // '#' bayrağı
    int space;      // ' ' bayrağı
    int plus;       // '+' bayrağı
    int width;      // Minimum alan genişliği
    int precision;  // Hassasiyet (noktadan sonraki sayı)
    int dot;        // '.' noktası koyuldu mu?
    char specifier; // 'd', 's', 'x' vb.
}
#endif