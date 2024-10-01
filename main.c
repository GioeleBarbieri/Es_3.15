#include <stdio.h>

int main(void)
{
   float prezzo;
   char categoria;

   printf("inserisci la categoria di appartenenza (digita P se pensionato, S se studente e D se disoccupato: ");
   scanf("%c", &categoria);

   printf("inserisci il prezzo del biglietto: ");
   scanf("%f", &prezzo);

   if (categoria == 'P')
   {
      prezzo -= prezzo*0.1;
   }
   else if( categoria == 'S')
      {
         prezzo -= prezzo*0.15;
      }
   else if(categoria == 'D')
   {
      prezzo -= prezzo*0.25;
   }
   else (printf("la categoria non è valida"));

   printf("il prezzo del biglietto e': %f", prezzo);

   return 0;
}
