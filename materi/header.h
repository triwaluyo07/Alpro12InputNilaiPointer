#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float n_tugas;
    float n_uas;
    float n_uts;
}nilai;
typedef struct
{
    char nama[100];
    char nim[20];
    float ipk;
    nilai biji;
}mhs;

///mhs input_data();
void input_data (mhs *M);
void output_data (mhs M);


#endif // HEADER_H_INCLUDED
