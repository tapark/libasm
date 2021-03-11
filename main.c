#include "libasm.h"

int main(int argc, char **argv)
{
	char dest[999];
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	printf("\n");

	printf("입력받은 문자열(1) : %s\n", argv[1]);
	printf("입력받은 문자열(2) : %s\n", argv[2]);

	printf("\n");

	printf("strlen(1)    : %ld\n", strlen(argv[1]));
	printf("strlen(2)    : %ld\n", strlen(argv[2]));
	printf("ft_strlen(1) : %ld\n", ft_strlen(argv[1]));
	printf("ft_strlen(2) : %ld\n", ft_strlen(argv[2]));

	printf("\n");

	printf("strcpy(dest, 1)    : %s\n", strcpy(dest, argv[1]));
	printf("strcpy(dest, 2)    : %s\n", strcpy(dest, argv[2]));
	printf("ft_strcpy(dest, 1) : %s\n", ft_strcpy(dest, argv[1]));
	printf("ft_strcpy(dest, 2) : %s\n", ft_strcpy(dest, argv[2]));

	printf("\n");

	printf("strcmp(1, 2)    : %d\n", strcmp(argv[1], argv[2]));
	printf("strcmp(2, 1)    : %d\n", strcmp(argv[2], argv[1]));
	printf("ft_strcmp(1, 2) : %d\n", ft_strcmp(argv[1], argv[2]));
	printf("ft_strcmp(2, 1) : %d\n", ft_strcmp(argv[2], argv[1]));

	printf("\n");

	printf("strdup(1)    : %s\n", str1 = strdup(argv[1]));
	printf("strdup(2)    : %s\n", str2 = strdup(argv[2]));
	printf("ft_strdup(1) : %s\n", str3 = ft_strdup(argv[1]));
	printf("ft_strdup(2) : %s\n", str4 = ft_strdup(argv[2]));
	free(str1);
	free(str2);
	free(str3);
	free(str4);

	printf("\n");

	return (0);
}