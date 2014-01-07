#include<stdio.h>
#include<conio.h>
void f(float a)
{
     if(a) 
       if(a>0)
       printf("semnul nr este +");
       else
       printf("semnul nr este -");
   else
   printf("numarul introdus este nul");
}


int main (void)
{ float x;
printf("Introduceti numarul =");
scanf("%f",&x);
f(x);
getch();
}


