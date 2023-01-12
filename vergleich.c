#include <stdio.h>

void vergleich(int a, int b) {
	if(a > b) {
		printf("Die erste Zahl ist größer.\n");
	}
	else if (a < b) {
		printf("Die zweite Zahl ist größer.\n");
	}
	else {
		printf("Die Zahlen sind gleich groß.\n");
	}
}

