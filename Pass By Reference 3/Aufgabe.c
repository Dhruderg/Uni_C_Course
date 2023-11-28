#include <stdio.h>


void ownStrcpy(char * copy, char * original)
{

	while (*original != '\0')
	{
		*copy = *original;	// Transfer chars to copy
		++copy;
		++original;
	}
	// Place NULL in copy when original finishes
	*copy = '\0';	
}


int main()
{
	char originalString[] = "Programmieren";
	char copiedString[40];
	ownStrcpy(copiedString, originalString);
	printf("%s", copiedString);
	return 0;
}