#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a;
	printf("Introduceti raza cercului: ");
	scanf("%f", &a);
	printf("\nLungimea cercului este: %f\n", 2*3.1415*a);
	printf("Aria cercului de raza %f este: %f\n", a, 3.14*a*a );
	printf("Multumesc.");
	system("PAUSE");
	return EXIT_SUCCESS;
}
