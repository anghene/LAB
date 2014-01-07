#include <cstdlib>
#include <iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(int argc, char *argv[])

{
int i, a[10] , min , max; //toate variabilele pe care le vom folosi trebuiesc declarate
system("cls");
for(i=0;i<10;i=i+1)
    {
    printf("introduceti a[%d]",i);
    scanf("%d",&a[i]); // citim pe rând elementele sirului în ai
    }
min=a[0];
max=a[0];
for(i=0;i<10;i=i+1)
    {
    printf("a[%d]=%d \n", i,a[i]);
    if(a[i]>max) max=a[i]; // daca elem. Curent >max atunci schimba
    if(a[i]<min) min=a[i]; // daca elem. Curent <min atunci schimba
    }
printf("Maximul este %d iar minimul este %d",max,min);
getch();

    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
