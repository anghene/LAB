#include <cstdlib>
#include <iostream>
#include <string.h>

void cauta(char *text, char *litera)
{ // notatia * se foloseste pt ca se transmite un pointer adica adresa unde se gaseste sirul
int i;
for(i=0;i<strlen(text);i++)
if (litera[0]==text[i]) 
printf ("Am gasit litera %s in pozitia %d \n",litera, i+1); 
}
using namespace std;


int main(int argc, char *argv[])
{
//declaratii variabile
char sir[30],caracter[2];
//citim sirul de caractere
printf("Introduceti un sir de caractere ");
scanf("%s",&sir);
//citim caracterul de cautat
printf("Introduceti litera de cautat ");
scanf("%s",&caracter);
//apelul functiei
cauta(sir,caracter);

system("PAUSE");
return EXIT_SUCCESS;
}
