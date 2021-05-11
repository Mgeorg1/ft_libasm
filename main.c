#include "libasm.h"

int	main(void)
{
	char	*b;
	char	a[15];
	char	buf[100];
	int		fd;
	int		ret;

	b = NULL;
	printf("____________ft_strlen_____________________________________\n\n");
	printf("|orginal strlen with text \"Hello world!\"  |%6zu |\n",
		strlen("Hello world!"));
	printf("|my own ft_strlen with text \"Hello world!\"|%6zu |\n",
		ft_strlen("Hello world!"));
	printf("----------------------------------------------------------\n");
	printf("|orginal strlen with text \"\"              |%6zu |\n", strlen(""));
	printf("|my own ft_strlen with text \"\"            |%6zu |\n", ft_strlen(""));
	printf("----------------------------------------------------------\n");
	printf("|orginal strlen with text \"H\"             |%6zu |\n", strlen("H"));
	printf("|my own ft_strlen with text \"H\"           |%6zu |\n\n",
		ft_strlen("H"));
	printf("____________ft_strcpy_____________________________________\n\n");
	printf("src: \"Hello world!\"\n");
	b = strcpy(a, "Hello world!");
	printf("original strcpy: \ndst: \"%s\"\nret: \"%s\"\n", a, b);
	b = ft_strcpy(a, "Hello world!");
	printf("my own ft_strcpy: \ndst: \"%s\"\nret: \"%s\"\n\n", a, b);
	printf("----------------------------------------------------------\n");
	printf("src: \"     \"\n");
	b = strcpy(a, "     ");
	printf("original strcpy: \ndst: \"%s\"\nret: \"%s\"\n", a, b);
	b = ft_strcpy(a, "     ");
	printf("my own ft_strcpy: \ndst: \"%s\"\nret: \"%s\"\n\n", a, b);
	printf("----------------------------------------------------------\n");
	printf("src: \"\"\n");
	b = strcpy(a, "");
	printf("original strcpy: \ndst: \"%s\"\nret: \"%s\"\n", a, b);
	b = ft_strcpy(a, "");
	printf("my own ft_strcpy: \ndst: \"%s\"\nret: \"%s\"\n\n", a, b);
	printf("____________ft_strcmp_____________________________________\n\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Hello"),
		ft_strcmp("Hello", "Hello"));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Hello"),
		ft_strcmp("", ""));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Helo"),
		ft_strcmp("Hello", "Helo"));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Helo", "Hello"),
		ft_strcmp("Helo", "Hello"));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Hello", "Helloffee"),
		ft_strcmp("Hello", "Helloffee"));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("Helloawwwf", "Hello"),
		ft_strcmp("Helloawwwf", "Hello"));
	printf("----------------------------------------------------------\n");
	printf("Original strcmp:\n%d\nmy own:\n%d\n\n", strcmp("", "Hello"),
		ft_strcmp("", "Hello"));
	printf("____________ft_read_______________________________________\n\n");
	fd = open("text", O_RDWR);
	bzero(&buf, sizeof(char) * 100);
	ret = read(fd, &buf, 100);
	printf("original read:\n%s\nret: %i\n\n", buf, ret);
	bzero(&buf, sizeof(char) * 100);
	ret = ft_read(fd, &buf, 100);
	printf("my own ft_read\n%s\nret: %i\n", buf, ret);
	close(fd);
	printf("----------------------------------------------------------\n");
	fd = -45678;
	bzero(&buf, sizeof(char) * 100);
	ret = read(fd, &buf, 100);
	printf("original read:\n%s\nret: %i\n\n", buf, ret);
	printf("errno: %s\n", strerror(errno));
	bzero(&buf, sizeof(char) * 100);
	ret = ft_read(fd, &buf, 100);
	printf("my own ft_read\n%s\nret: %i\n\n", buf, ret);
	printf("errno: %s\n", strerror(errno));
	printf("____________ft_write______________________________________\n\n");
	printf("My ft_write:\n");
	ft_write(1, "Hello World!\n\n", 14);
	printf("Original write:\n");
	write(1, "Hello World!\n\n", 14);
	printf("My ft_write with empty string:\n");
	ft_write(1, "", 1);
	printf("\nOriginal ft_write with empty string:\n");
	write(1, "", 1);
	printf("\n___________ft_strdup______________________________________\n\n");
	printf("My ft_strdup:\n\"%s\"\n\n", ft_strdup("Hello world!"));
	printf("Original strdup:\n\"%s\"\n\n", strdup("Hello world!"));
	printf("----------------------------------------------------------\n");
	printf("My ft_strdup:\n\"%s\"\n\n", ft_strdup(""));
	printf("Original strdup:\n\"%s\"\n\n", strdup(""));
}
