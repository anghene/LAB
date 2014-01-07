#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>

int main(int argc, char *argv[])/* Fahrenheit-Celsius table */
{
int fahr;
system("cls");
for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    
  system("PAUSE");	
  return 0;
}
