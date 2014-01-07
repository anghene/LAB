#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
int i, n, sir[10]={1,8,6,78,98,45,65,4,81,10};     

do
    {
    printf("\nIncercati sa nimerit un numar din lista");
    scanf("%d",&n);
    i=0;
    while(sir[i]!=n && i<=9) i=i+1;
    if(i==10) printf("\nNumarul dumneavostra nu se gaseste in sir");
    } while(i>9);
      printf("\nFelicitari numarul introdus de dumneavostra se gaseste in sir la pozitia %d",i);   
    
  
  system("PAUSE");	
  return 0;
}
