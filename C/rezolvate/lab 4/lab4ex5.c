#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
int i=0, n=45, sir[10]={1,8,6,78,98,45,65,4,81,10}; //vom cauta aparitia lui 45 in sirul sir
while(sir[i]!=n) i=i+1;
    printf("Am gasit elementul cautat in pozitia %d\n",i);
system("PAUSE");	
return 0;
}
