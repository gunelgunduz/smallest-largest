#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ // en boyuk,  en kicik reqemi tapmaq ucun proqram

   int s1, s2, s3;
   int largest, smallest;

   printf("3 reqem daxil edin");
   scanf("%d%d%d", &s1, &s2, &s3);

   largest = (s1>s2 && s1>s3) ? s1: (s2>s1 && s2>s3) ? s2: s3;
   smallest = (s1<s2 && s1<s3) ? s1: (s2<s1 && s2<s3) ? s2: s3;
   
    printf("Boyuk reqem: %d\n", largest);
    printf("Kicik reqem: %d", smallest);

    return 0;
}