#include <stdio.h>
#include <stdlib.h>

int main()
{
char letra;
printf("\nDigite uma letra: ");
scanf("%c",&letra);
fflush(stdin);
if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
  printf("\nA letra \x82 vogal\n\n");
else
  printf("\nA letra \x82 consoante\n\n");
system("pause");
return 0;
}//main
