#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
int i;

for(i=0 ; i<=10 ; i=i+1)
    {
    printf("Patratul lui %d este %d \n" , i , i*i );
    }
  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
