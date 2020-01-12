#include "header.h"

void input_data (mhs *M)
{
    printf("Input nama : ");
    ///gets(M.nama)
    ///gets((*M).nama);
    gets(M->nama);
    printf("Input nim : ");
    gets(M->nim);
    printf("Input ipk : ");
    scanf("%f",&(*M).ipk);
    printf("input nilai tugas : ");
    scanf("%f",&M->biji.n_tugas);
    printf("input nilai uas : ");
    scanf("%f",&M->biji.n_uas);
    printf("input nilai uts : ");
    scanf("%f",&M->biji.n_uts);
}

void output_data (mhs M)
{
    printf("Input nama : %s\n",M.nama);
    printf("Input nim : %s\n",M.nim);
    printf("Input ipk : %.2f\n",M.ipk);
    printf("input nilai tugas : %.2f\n",M.biji.n_tugas);
    printf("input nilai uas : %.2f\n",M.biji.n_uas);
    printf("input nilai uts : %.2f\n",M.biji.n_uts);

}
