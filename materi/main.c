#include"header.h"

///Tri Waluyo
///A11.20171.10097
///A11.4203

int main()
{
    ///mhs siswa;
    ///input_data(&siswa);
    puts("\n");
    ///output_data(siswa);

    puts("detik dengan srand");
    ///srand -> randomssize intuk menentukan
//    for(;;)
//    {
//        printf("pernah sakit\n");
//    }

    srand(time(NULL));
    int a=time(NULL);
    int wadah =a;

    for(;;)
    {
        int b=time(NULL);
        if(a!=b)
        {
            a=b;
            printf("%d ",time(NULL)-wadah);
        }
    }
    return 0;
}
