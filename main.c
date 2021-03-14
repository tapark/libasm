#include "libasm.h"

int main(int argc, char **argv)
{
	char dest[999];
	char text[999];
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	int fd;
	int ret;

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

	write(1, "write(1)    : ", 14);
	ret = write(1, argv[1], ft_strlen(argv[1]));
	printf(" / return : %d\n", ret);
	write(1, "write(2)    : ", 14);
	write(1, argv[2], ft_strlen(argv[2]));
	printf(" / return : %d\n", ret);

	ft_write(1, "ft_write(1) : ", 11);
	ret = write(1, argv[1], ft_strlen(argv[1]));
	printf(" / return : %d\n", ret);
	ft_write(1, "write(2) : ", 11);
	ft_write(1, argv[2], ft_strlen(argv[2]));
	printf(" / return : %d\n", ret);

	errno = 0;
	printf("write_errno    : %d -> ", errno);
	write(-1, "hello", 5);
	printf("%d\n", errno);

	errno = 0;
	printf("ft_write_errno : %d -> ", errno);
	ft_write(-1, "hello", 5);
	printf("%d\n", errno);

	printf("\n");

	fd = open("Makefile", O_RDONLY);
	ret = read(fd, text, 900);
	printf("read_fd    : %d / return : %d\n", fd, ret);
	ret = ft_read(fd, text, 900);
	printf("ft_read_fd : %d / return : %d\n", fd, ret);

	errno = 0;
	printf("read_errno    : %d -> ", errno);
	read(-1, "hello", 5);
	printf("%d\n", errno);

	errno = 0;
	printf("ft_read_errno : %d -> ", errno);
	ft_read(-1, "hello", 5);
	printf("%d\n", errno);

	printf("\n");

	return (0);
}