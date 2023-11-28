#include <stdio.h>

void main() {
	int num;
	scanf_s("%d", &num);
	for (int row = 0; row < num; row++) {
		for (int x = 0; x < num; x++) {
			if (row == 0 || row == num - 1 || x == 0 || x == num - 1 || x == row || x == num - 1 - row) {
				//	First or last row? full *, first or last x? full *
				//	x == row so that it goes to the right
				//  x== num-1-row so that it goes to the left from far right 
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}


/*
*********		num = 9
**     **
* *   * *
*  * *  *
*   *   *
*  * *  *
* *   * *
**     **
*********
*/