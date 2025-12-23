#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>

typedef struct	s_struct
{
	uint32_t	n;
	char		*s;
}		t_struct;

char	c[0x44];

int	m(void)
{
	return (printf("%s - %d\n", c, (int)time(NULL)));
}

int	main(int ac, char **av)
{
	t_struct	*a;
	t_struct	*b;

	a = malloc(8);
	a->n = 1;
	a->s = malloc(8);

	b = malloc(8);
	b->n = 2;
	b->s = malloc(8);

	strcpy(a->s, av[1]);
	strcpy(b->s, av[2]);

	fgets(c, 0x44, fopen("/home/user/level8/.pass", "r"));
	puts("~~");

	return (0);
}
