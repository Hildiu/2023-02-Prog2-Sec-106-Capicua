/*---------------------------------------------------
 * Dato de Entrada: numero (unsigned long int)
 * Dato de Salida:  mensaje "El numero es capicua" o
 *                          "El numero No es capicua"
 -------------------------------------------------------*/

#include <iostream>
using namespace  std;

unsigned long int invertirNumero( unsigned long int num );

int main()
{ unsigned long int numero;

    cout << "Numero positivo: ";
    cin >> numero;
    if(numero == invertirNumero(numero))
        cout << "El numero es capicua";
    else
        cout << "El numero No es capicua";
    return 0;
}


unsigned long int invertirNumero( unsigned long int num )
{
   unsigned long int ni = 0;
   unsigned long int digito;

   while(num!=0)
   {
       digito = num % 10;
       ni = ni*10 + digito;
       num = num /10;
   }
   return ni;
}