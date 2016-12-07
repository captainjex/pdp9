#include<stdio.h>
#include<stdlib.h>
main()
{
   int bilangan, faktor=0, i, batas;

   printf("prima: ");

    for(bilangan=2;bilangan<=21;bilangan++){
        faktor=0;
        for(i=1;i<=bilangan;i++){
            if(bilangan%i==0){
                faktor++;
            }
        }
        if (faktor==2){
            printf("%d ", bilangan);
        }
    }
   return 0;
}
