#include <stdio.h>
#include <stdlib.h>

int main()
{
int mat[4][5],i,j;

//Receber numeros e armazenar em uma matriz
for(i=0;i<4;i++)
  for(j=0;j<5;j++)
  {
    printf("Digite mat[%i][%i]= ",i,j);
    scanf("%i",&mat[i][j]);
    fflush(stdin);
  }//for

for(i=0;i<4;i++)
  {
    for(j=0;j<5;j++)
      printf("%i\t",mat[i][j]);
    printf("\n");
  }//for
system("pause");
return 0;
}//main

