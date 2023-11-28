#include <stdio.h>
#include <stdbool.h>

void main() {
    int row, nums = 0;
    bool symbol = true;
    scanf_s("%d %d", &row, &nums);

    for (int i = 0; i < row; i++) {
        for (int x = 0; x < nums; x++) {
            if (symbol) {
                printf("+");
            }
            else {
                printf("-");
            }
            symbol = !symbol; // Toggle between true and false
        }
        printf("\n");
        if (nums % 2 == 0) {
            symbol = !symbol; // Toggle at the start of each even row
        }
    }
}