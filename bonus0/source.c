#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*p(char *dst, char *prompt)
{
	char	buf[0x1000 + 8];

	puts(prompt);
	read(0, buf, 0x1000);
	*(strchr(buf, '\n')) = 0;
	return (strncpy(dst, buf, 20));
}

char	*pp(char *dst)
{
	char	a[20];
	char	b[20];
	char	*end;

	p(a, " - ");
	p(b, " - ");
	strcpy(dst, a);
	end = dst + strlen(dst);
	*end = ' ';
	return (strcat(dst, b));
}

int	main(void)
{
	char	str[42];

	pp(str);
	puts(str);
	return (0);
}
