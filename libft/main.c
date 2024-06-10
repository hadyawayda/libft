#include "isalpha.h"
#include <stdio.h>
#include <>

int	main(int ac, char *av[]) {
	(void)ac;
	int i = atoi(*av[1]);
	
	if(ac > 0) {
		printf("%d", isalpha_custom(*av[1]));
	}
	return 0;
}