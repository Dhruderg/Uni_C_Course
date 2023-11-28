#include <stdio.h>

void main() {
	int row, nums = 0;
	scanf_s("%d %d", &row, &nums);
	
	for (int i = 0; i < row; i++) {
		for (int x = 0; x < nums; x++) {
			if ((i != 0 && i != row - 1) && (x != 0 && x != nums-1)) {
				//Wenn nicht 1. Reihe oder letzte Reihe, und Zahl ist der erste oder der letzte
				printf_s(" ");
			}
			else {
				printf_s("*");
			}
		}
		printf_s("\n");
	}
}