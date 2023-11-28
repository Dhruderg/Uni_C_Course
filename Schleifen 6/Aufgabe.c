#include <stdio.h>
#include <stdbool.h>

void main() {
	bool CalculateCelsius = true; // 1 --> Aufg. 6; 0 --> Aufg. 7
	if (!CalculateCelsius) {
		int GradCelsius, GradFahrenheit;
		printf("Celsius\tFahrenheit\n");

		for (GradCelsius = -20; GradCelsius <= 300; GradCelsius = GradCelsius + 20) {
			GradFahrenheit = ((GradCelsius * 9) / 5) + 32;
			printf("%7d\t %9d \n", GradCelsius, GradFahrenheit);

		}
	}
	else {
		float GradCelsius, GradFahrenheit;
			printf("Fahrenheit\tCelsius\n");
			for (GradFahrenheit = -20; GradFahrenheit <= 300; GradFahrenheit = GradFahrenheit + 20) {
				GradCelsius = (5*(GradFahrenheit - 32)) / 9;
				printf("%10.0f\t %6.2f \n", GradFahrenheit, GradCelsius);

		}
	}
}