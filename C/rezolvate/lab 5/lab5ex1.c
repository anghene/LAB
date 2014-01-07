#include <stdio.h>
#include <stdlib.h>


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

int main(int argc, char *argv[]) {
float x;
printf("Introduceti numarul =");
scanf("%f",&x);
f(x);
    system("PAUSE");
    return EXIT_SUCCESS;
}
