#include <stdio.h>
#define PI 3.1415



void sphere(int radius, double * volume, double * surface)
{
	*surface = 4.0 * PI * radius * radius;
	*volume = 4.0/3.0 * PI * radius * radius * radius;
}


int main()
{
	int radius = 5;
	double volume, surface;
	sphere(radius, &volume, &surface);
	printf("Radius: %d\nVolumen: %.1lf\nOberflaeche %.1lf\n", radius, volume, surface);
	return 0;
}