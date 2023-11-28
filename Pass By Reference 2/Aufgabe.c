#include <stdio.h>


void toUpper(char* pointer){
	while (*pointer != '\0'){
		if (*pointer >= 'a' && *pointer <= 'z'){
			*pointer = *pointer - 32;
		}
		++pointer;
	}
}



int main ()
{
	char arr[] = "Hallo Welt";
	toUpper(arr);
	printf("%s\n", arr);

	return 0;
}