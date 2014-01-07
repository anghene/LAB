#include<stdio.h>
#include <conio.h>
int main()
{
    char t,c;
    int i=0;
    printf("Introduceti textul: ");
    do
      {
       scanf("%c",&t);
       if(t=='c') i++;
      }
      while (t!=10);
      printf("Numarul aparitilor lui c sunt %d, %d",i,'c');
      getch();
}
