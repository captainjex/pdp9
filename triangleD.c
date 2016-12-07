#include<stdio.h>
#include<stdlib.h>
main()
{
   int i,j,k, input;

    printf("inputan: ");scanf("%d", &input);
   for(i=1;i<=input;i++){
        for(j=input,k=i;j>=i;j--,k++){
            printf("%d", k);
        }
        printf("\n");
   }
   return 0;
}

