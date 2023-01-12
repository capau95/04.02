#include <stdio.h>
#include "vergleich.h"

int main() {
	int a = eingabe();
	int b = eingabe();
	vergleich(a,b);


return 0;
}
int eingabe() {
	int input;
	printf("Bitte Zahl eingeben:\n");
	scanf("%i", &input);
	return input;
}


