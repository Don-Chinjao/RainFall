#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

void	m(void)
{
	puts("Nope");
}

int	main(int ac, char **av)
{
	char *s;
	void (**ptr)(void);

	s = malloc(64);
	ptr = malloc(4);
	*ptr = &m;
	strcpy(s, av[1]);
	(*ptr)();
	return (0);
}
