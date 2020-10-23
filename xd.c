#include <stdio.h>
#include <stdint.h>
 
char BASIFICATION[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int MAXBASE=36;
 
int main()
{
  int done=0;
  int num, base, resto, digito;
 
  printf("Convertidor Decimal a otra base \n");
  printf("(ingrese 0 0 para terminar)\n");
 
 
 while( !done)
  {
   printf("Por favor ingrese dos numeros enteros en base 10 (numero  base): ");
   scanf("%d", &num);
   scanf("%d", &base);
   if( (base<2) || (base>MAXBASE) )
    {
       printf("Por favor ingrese una base entre 2 y %d.\n",MAXBASE);
       if(base<=0) done=1;
           continue;
     }
    printf("%d\n", num);
    printf("%d\n", base);
    printf("\n");
   if(base == MAXBASE)
    {
      printf("%XX\n", num);
      continue;
   }
    if (base > 1 && base < MAXBASE)
    {
       char inverso[99], ndx=0;
      //imprime dígitos en orden inverso
      resto = num;
      while(resto > 0) //método numérico
      {
               digito = (resto%base);
               resto = (resto/base);
               printf("%c ", BASIFICATION[digito]);
               inverso[ndx++] = BASIFICATION[digito];
      }
      printf("\n");
      //invierte dígitos para imprimirlos en el orden correcto
      for( ;ndx>0; ) { printf("%c ",inverso[--ndx]); }
          printf("\n");
       }
  }
 
return 0;
}
