#include <float.h>
#include <stdio.h>
#include <math.h>

int weekday(int day, int month, int year) {

    int y = year % 100; // Last 2 numbers of the year

    // Algorithm to calculate day
    if (month < 3)
        y = y - 1; // February and January adjustment
    int daynumber = ((int)(day + floor(2.6 * ((month + 9) % 12 + 1) - 0.2) + y + floor(y / 4) + floor(year / 400) - 2 * floor(year / 100) - 1) % 7 + 7) % 7 + 1;

    //Debug
	//printf("Day: %d Month: %d Year: %d y: %d\n", day, month, year, y);

    return daynumber;  // Adjust for 1-based indexing of days
}

int main() {
        const int temp = weekday(05, 05, 1975);
        switch (temp)
        {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Monday");
        }
    
    return 0;
}

