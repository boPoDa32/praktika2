// fdgfd.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
  
   int chislo, ostatok;
   system("color 0");
   do{
   cout << "Vvedite celoe chislo: ";
   cin >> chislo;
   //Если ноль выдать сообщение об очепятке
   
   ostatok = chislo % 2;
   
   if (ostatok == 0)
      cout << "Chislo " << chislo << " chetnoye\n";
   if (ostatok != 0)
      cout << "Chislo " << chislo << " nechetnoye\n";
   
   }
   while(chislo=='0');
	   system("pause");
   return 0;
 
}
