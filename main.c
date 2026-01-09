#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		count;

	count = 1;
	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}

	printf("**read**\n");
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("row %d: %s", count++, line);
		free(line);
	}
	printf("\n**end**\n");

	close(fd);
	return (0);
}