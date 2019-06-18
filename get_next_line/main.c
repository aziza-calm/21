#include "./bcharman/get_next_line.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		printf("Usage: ./a.out <filename>\n");
	int fd = open(argv[1], O_RDONLY);
	char *line;
	int i = 1;
	while (get_next_line(fd, &line) == 1)
	{
		printf("%d %s\n", i, line);
		free(line);
		i++;
	}
	close(fd);
	return 0;
}
