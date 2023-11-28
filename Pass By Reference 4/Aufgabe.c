#include <stdio.h>

void append(char * ptr, char * paste)
{
	while (*ptr != '\0')
	{
		++ptr;	// Jump to the end of buffer
	}

	while (*paste != '\0')
	{
		*ptr = *paste;	// Paste in the Custom Input
		++ptr;
		++paste;
	}

}



int main()
{
	char buffer[40] = "Hallo ";
	append(buffer, "Welt");
	printf("%s\n", buffer);
	return 0;
}