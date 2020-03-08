#include <stdio.h>
#include <math.h>

int main()
{
    short int inp;
    printf ("Enter a value to convert to binary: ");
    scanf("%hu", &inp);

    const short int i_size = sizeof(short int) * 8;
    char p[i_size];
    short int i = inp;
    short int test_i = 1;
    printf("\n-------------------------------------------------\n");
    printf("our system is %s endian\n", ((*(char*)&test_i) & 1) ? "big" : "little");

    for (unsigned int j = 0; j < i_size ; ++j) {
        p[j] = i & 1;
        i = i >> 1;
    }

   int arr_size = sizeof(p);
   printf("-------------------------------------------------\n");
   printf("binary representation of %d is ", inp);
   for (int c = arr_size - 1; c >= 0 ; --c) {
        printf("%d",p[c]);
    }
    printf("\n-------------------------------------------------\n");
    return 0;
}
