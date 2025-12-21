#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

char	*p(void)
{
	char	buffer[64];
	void	*ptr;       /* ---- $ebp+0x4 ---- */

	fflush(stdout);
	gets(buffer);
	ptr = buffer+80;
	if (((uint32_t)ptr & 0xb0000000) != 0xb0000000) {
		puts(buffer);
		return (strdup(buffer));
	}
	printf("(%p)\n", ptr);
	_exit(1);
}

void	main(void)
{
	p();

	return ;
}
