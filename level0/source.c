#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int val = atoi(av[1]);

	if (val == 423) {
		char *str = strdup("/bin/sh");
		gid_t egid = getegid();
		uid_t euid = geteuid();

		setresgid(egid, egid, egid);
		setresuid(euid, euid, euid);

		char *args[] = {str, NULL};
		execv(args[0], args);
	}
	else {
		fwrite("No !\n", 1, 5, stdout);
	}
	return (0);
}
