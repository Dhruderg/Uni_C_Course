#include <stdio.h>
#pragma warning(disable : 4996) 


typedef struct
{
	float numerator;	//Zahler
	float denominator;	//Nenner
} Fraction;

Fraction multiplyFraction(Fraction fraction1, Fraction fraction2){
	Fraction result;
	result.numerator = fraction1.numerator * fraction2.numerator;	//Zahler * Zahler
	result.denominator = fraction1.denominator * fraction2.denominator;	//Nenner * Nenner
	return result;
}

Fraction divideFraction(Fraction fraction1, Fraction fraction2)
{
	Fraction result;
	result.numerator = fraction1.numerator * fraction2.denominator;	//Zahler * Nenner
	result.denominator = fraction1.denominator * fraction2.numerator;	//Nenner * Zahler
	return result;
}

int main(int argc, char* argv[]) {

	/*Declaracation*/
	Fraction fraction1, fraction2;
	char input1[10];	
	char input2[10];
	/*Einlesen Werte*/
	scanf("%s", input1);
	scanf("%s", input2);

	sscanf(input1, ("%f/%f"), &fraction1.numerator, &fraction1.denominator);	//Read float separated by '/'
	sscanf(input2,("%f/%f"), &fraction2.numerator, &fraction2.denominator);	//Read float separated by '/'

	/*Product and Division call and print*/
	Fraction product = multiplyFraction(fraction1, fraction2);	
	printf("(%.1f/%.1f)*(%.1f/%.1f)=(%.1f/%.1f) \n", 
		fraction1.numerator,fraction1.denominator,
		fraction2.numerator,fraction2.denominator, 
		product.numerator,product.denominator);
	Fraction division = divideFraction(fraction1, fraction2);
	printf("(%.1f/%.1f)/(%.1f/%.1f)=(%.1f/%.1f) \n", 
		fraction1.numerator, fraction1.denominator, 
		fraction2.numerator, fraction2.denominator, 
		division.numerator, division.denominator);
	return 0;
}
