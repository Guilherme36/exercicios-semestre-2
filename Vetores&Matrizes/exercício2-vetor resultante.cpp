#include <stdio.h>
#include <stdlib.h>

int main()
{
int A[5],B[5],C[5],i;

//Receber 5 numeros e armazenar em um vetor
for(i=0;i<5;i++)
  {
    printf("Digite A[%i]= ",i);
    scanf("%i",&A[i]);
    fflush(stdin);
  }//for
printf("\n");
for(i=0;i<5;i++)
  {
    printf("Digite B[%i]= ",i);
    scanf("%i",&B[i]);
    fflush(stdin);
  }//for
printf("\nO vetor resultante C:\n");
for(i=0;i<5;i++)
  {
    C[i]=A[i]+B[i];
	printf("C[%i]= %i\n",i,C[i]);
  }//for
printf("\n");
system("pause");
return 0;
}//main

