#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

int	main(int ac, char **av)
{
	char	s[40];
	int32_t	n;

	n = atoi(av[1]);
	if (n > 9)
		return (1);

	memcpy(&s, av[2], n << 2);

	if (n == 0x574f4c46)
		execl("/bin/sh", "sh", NULL);

	return (0);
}
