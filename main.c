#include "libasm.h"

int main()
{
	char *b = NULL;
	char a[15];

	// bzero(a, sizeof(char) * 15);
	printf("|orginal strlen with text \"Hello world!\"  | %zu |\n", strlen("Hello world!"));
	printf("|my own ft_strlen with text \"Hello world!\"| %zu |\n\n", ft_strlen("Hello world!"));
	b = strcpy(a, "Hello world!");
	printf("original strcpy: \ndst: %s\nret: %s\n", a, b);
	b = strcpy(a, "Hello world!");
	printf("my own ft_strcpy: \ndst: %s\nret: %s\n\n", a, b);
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Hello"), ft_strcmp("Hello", "Hello"));
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Helo"), ft_strcmp("Hello", "Helo"));
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("Helo", "Hello"), ft_strcmp("Helo", "Hello"));
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Helloffee"), ft_strcmp("Hello", "Helloffee"));
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("Helloawwwf", "Hello"), ft_strcmp("Helloawwwf", "Hello"));
	printf("Original:\n%d\nmy own:\n%d\n\n", strcmp("", "Hello"), ft_strcmp("", "Hello"));
}