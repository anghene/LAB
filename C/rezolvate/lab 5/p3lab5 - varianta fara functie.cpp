#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

// problema cu gasirea unui caracter intr-un sir:
// varianta fara functie

int main(int argc, char *argv[])
{
//declaratii variabile
char sir[30],caracter[2];
int i;
//citim sirul de caractere
printf("Introduceti un sir de caractere ");
scanf("%s",&sir);
//citim caracterul de cautat
printf("Introduceti litera de cautat ");
scanf("%s",&caracter);
//parcurgem sirul si comparam fiecare elemenet al acestuia cu caracterul cautat
for(i=0;i<strlen(sir);i++)
if (caracter[0]==sir[i]) 
printf ("Am gasit litera %s in pozitia %d \n",caracter, i+1);
system("PAUSE");
return EXIT_SUCCESS;
}
